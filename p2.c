#include <stdio.h>

void main(){
	/* 2주차
		1장. 네트워크의 기초 용어와 기능
		데이타 : 1, 0으로 구성된 스트림
		1바이트 4개가 모이면 8비트

		호스트 : 컴퓨터(시스템)

		네트워크 구성방식
		망형
		버스형
		스타형
		링형

		01 네트워크 관련 기초 용어
		-시스템, 인터페이스, 전송 매체, 프로토콜, 네트워크, 인터넷
		-네트워크 : 전송 매체로 서로 연결된 시스템의 모음
		-시스템 : 내부 규칙에 따라 능동적으로 동작하는 대상
		-인터페이스 : 시스템과 전송 매체의 연결 지점에 대한 규격
		-전송매체 : 시스템끼리 데이터를 전달하기 위한 물리적인 전송 수단
		-프로토콜 : 전송 매체를 통해 데이터를 교환할 때의 임의의 통신 규칙
		-네트워크 : 프로토콜을 사용하여 데이터를 교환하는 시스템의 집합
		-인터넷 : 전세계의 네트워크가 유기적으로 연결되어 동작하는 통합 네트워크
		-표준화 : 서로 다른 시스템이 상호 연동해 동작하기 위한 통일된 연동 형식

		시스템 기초 용어 
		-노드 : 인터넷에 연결된 시스템의 가장 일반적인 용어
		-호스트 : 컴퓨팅 기능이 있는 시스템
		-클라이언트 : 서비스를 요청하는 시스템
		-서버 : 서비스를 제공하는 시스템

		02 네트워크의 기능
		계층 모델
		-ISO의 OSI 7계층 모델
		응용 계층
			|
		표현 계층
			|
		세션 계층
			|
		전송 계층
			|
		네트워크 계층
			|
		데이터 링크 계층
			|
		물리 계층

		각 계층별 기능
		-물리 계층 : 물리적으로 데이터를 전송하는 역할을 수행
		-데이터 링크 계층 : 물리적 전송 오류를 해결 (오류 감지 / 재전송 기능)
		-네트워크 계층 : 올바른 전송 경로를 선택 (혼잡 제어 포함)
		-전송 계층 : 송수신 프로세스 사이의 연결 기능을 지원
		-세션 계층 : 대화 개념을 지원하는 상위의 논리적 연결을 지원
		-표현 계층 : 데이터의 표현 방법
		-압축 : 전송되는 데이터의 양
		-암호화 : 전송되는 데이터의 의미
		-응용 계층 : 다양한 응용 환경을 지원

		프로토콜 : 서로 다른 호스트에 위치한 동일 계층끼리의 통신 규칙
		인터페이스 : 같은 호스트에 위치한 상하위 계층 사이의 규칙
		서비스 : 하위 계층이 상위 계층에 제공하는 인터페이스

		인터넷 계층 구조
		- 네트워크 계층, 전송 계층
		-FTP 클라이언트, 서버 <--> TCP <--> IP <--> LAN 카드 드라이버 <--> 이더넷

		인터네트워킹
		-게이트웨이 : 인터네트워킹 기능을 수행하는 시스템
		-리피터 : 물리 계층을 지원
		-브리지 : 물리 계층과 데이터 링크 계층을 지원
		-라우터 : 물리 계층, 데이터 링크 계층, 네트워크 계층을 지원

		데이터 단위
		-APDU : 응용 계층의 데이터 단위
		-PPDU : 표현 계층의 데이터 단위
		-SPDU : 세션 계층의 데이터 단위
		-TPDU : 전송 계층의 데이터 단위
			+세그먼트 : TCP 프로토콜에서 사용
			+데이터그램 : UDP 프로토콜에서 사용
		-NPDU : 네트워크 계층의 데이터 단위(패킷)
		-DPDU : 데이터 링크 계층의 데이터 단위(프레임)

		03 네트워크 주소의 표현
		-IP주소
			+IPv4 프로토콜에서 사용
			+32 비트 크기의 주소 체계
			+IPv6에서는 128 비트 주소 체계로 확장
			+예: 211.223.201.30

		호스트 이름
		-<호스트>.<단체 이름>.<단체 종류>.<국가 도메인>

		호스트 파일
		-호스트 이름과 IP 주소의 조합을 텍스트 파일로 관리
	*/
}