//// Fill out your copyright notice in the Description page of Project Settings.
//
//#pragma once
//
//#include "CoreMinimal.h"
//#include "Components/ActorComponent.h"
//#include "Cartridge.generated.h"
//
//
//UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
//class ESCAPE_ROOM_API UCartridge : public UActorComponent
//{
//	GENERATED_BODY()
//
//public:	
//	virtual void OnInput(const FString& Input) PURE_VIRTUAL(UCartridge::OnInput,);
//
//protected:
//	// Called when the game starts
//	virtual void BeginPlay() override;
//
//	void PrintLine(const FString& Line) const;
//	void PrintLine(const TCHAR* Line) const; // Avoid Template
//	template<SIZE_T N, typename ...Types>
//	void PrintLine(const TCHAR(&Fmt)[N], Types...Args) const
//	{
//		PrintLine(FString::Printf(Fmt, Args...));
//	}
//	void ClearScreen() const;
//
//private:
//	class UTest_Terminal* Terminal;
//};
