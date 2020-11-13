// QTM Connect For Unreal. Copyright 2018-2020 Qualisys
//
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ILiveLinkSource.h"
#include "QTMConnectLiveLinkBlueprint.generated.h"

UCLASS()
class QTMCONNECTLIVELINK_API UQTMConnectLiveLinkBlueprint : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

    UFUNCTION(BlueprintCallable, Category = "Qualisys", meta = (DisplayName = "Create QTM Connect LiveLink Source", IpAddress = "127.0.0.1", AutoDiscover = "true", Stream3d = "true", Stream6d = "true", StreamSkeleton = "true"))
    static void CreateQTMConnectLiveLinkSource(FString IpAddress, bool AutoDiscover, bool Stream3d, bool Stream6d, bool StreamSkeleton, FLiveLinkSourceHandle& SourceHandle);
};
