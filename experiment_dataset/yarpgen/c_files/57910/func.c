/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57910
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_11 = ((/* implicit */long long int) 12126114018684762439ULL);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6361894222289083650LL)) ? (17994711472302569481ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) 2601765280U)) : (3491233196963986529LL)))) ? ((+((+(-6361894222289083651LL))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 6361894222289083650LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (12126114018684762439ULL))) : (max((2250706562085682343ULL), (((/* implicit */unsigned long long int) 0LL))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2758139411U)) ? (1803510662212340105LL) : (((/* implicit */long long int) 2316729632U))))) : (((((/* implicit */_Bool) 1803510662212340105LL)) ? (16196037511623869272ULL) : (14428223794143056187ULL))));
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 2250706562085682343ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (18446744073709551611ULL)));
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned short)0))))))) : (min((16888498602639360LL), (0LL)))));
                        arr_12 [i_2] [i_0] [i_1] [i_2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((0), (((/* implicit */int) (short)10061))))) ? (-1803510662212340106LL) : (-6361894222289083621LL))), (((((/* implicit */_Bool) min((-9188387397356508889LL), (((/* implicit */long long int) 1432004922U))))) ? (min((((/* implicit */long long int) (unsigned short)25424)), (1803510662212340105LL))) : (16888498602639370LL)))));
                    }
                    for (short i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
                    {
                        var_14 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)40111)) ? (0) : (((/* implicit */int) (unsigned short)25425))))), (((((/* implicit */_Bool) 2305702271725338624ULL)) ? (((((/* implicit */_Bool) -8600881316007385810LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-9304))) : (1755841898261051348LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)32256)))))));
                        var_15 += ((/* implicit */unsigned short) (+((+(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (1803510662212340105LL) : (((/* implicit */long long int) -1840350481))))))));
                    }
                    for (short i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_2] = (+(((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)40111)), (2147483647)))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (6114544493596415572ULL) : (((/* implicit */unsigned long long int) -1LL)))) : (((/* implicit */unsigned long long int) 679496182930908550LL)))));
                        var_16 += ((/* implicit */_Bool) (+((((_Bool)0) ? (224U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25425)))))));
                        arr_18 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */signed char) max((max((((/* implicit */long long int) 3150830235U)), (min((((/* implicit */long long int) (unsigned short)12065)), (-2705184821172011363LL))))), (((/* implicit */long long int) max(((unsigned short)40110), (((/* implicit */unsigned short) (_Bool)1)))))));
                    }
                    for (short i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_2] [(short)9] [i_1] [i_2] = ((/* implicit */unsigned int) min(((+(((((/* implicit */_Bool) 1928277143)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535)))))));
                        arr_22 [i_1] [i_2] = ((/* implicit */signed char) 224U);
                    }
                    arr_23 [(short)5] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) 0LL);
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_7 = 2; i_7 < 8; i_7 += 3) 
        {
            for (short i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_17 = ((/* implicit */int) 6917529027641081856ULL);
                        arr_32 [7] [(_Bool)1] [i_9] [10ULL] [i_0] [i_0] = ((/* implicit */int) min(((+(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (11625320646641320022ULL) : (((/* implicit */unsigned long long int) 1928277143)))))), (((/* implicit */unsigned long long int) (+((+(-1928277144))))))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_3))));
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) 3629308058U)), (((((/* implicit */_Bool) var_0)) ? (16179110121778433431ULL) : (max((((/* implicit */unsigned long long int) -5259441408697911241LL)), (2359891111416540266ULL)))))));
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2267633951931118175ULL)) ? (((/* implicit */unsigned long long int) 675599875030031161LL)) : (10004305576697161349ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)90)) ? (-1928277144) : (((/* implicit */int) (unsigned short)65519))))) : (min((3548926487U), (((/* implicit */unsigned int) (_Bool)1))))))) ? (var_2) : (((/* implicit */unsigned int) var_4)));
}
