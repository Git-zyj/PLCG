/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83557
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
    var_15 = (~(((/* implicit */int) var_3)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_16 = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 225742908U)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-5156704961255668367LL))))))) : (((/* implicit */int) ((signed char) ((-1LL) == (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
        var_17 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((0U) - (var_13))))))) | (((/* implicit */int) var_7)));
        var_18 = ((/* implicit */int) ((min((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_8))), (((var_8) ^ (4693416690852621846ULL))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13753327382856929769ULL)) ? (13753327382856929789ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-5156704961255668367LL))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (long long int i_3 = 3; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_19 &= ((/* implicit */unsigned int) ((int) arr_8 [i_0] [i_0] [(unsigned short)0] [i_0] [i_0]));
                        var_20 *= ((/* implicit */unsigned int) (~(13753327382856929770ULL)));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) arr_9 [i_0] [(_Bool)1] [i_2]);
                            var_21 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((13753327382856929770ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
                        }
                        for (int i_5 = 2; i_5 < 11; i_5 += 2) /* same iter space */
                        {
                            var_22 &= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5 + 1] [10ULL])) ? (((/* implicit */long long int) 0U)) : (5156704961255668372LL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)30966))))) : ((-(4693416690852621830ULL))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) arr_13 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_5 + 2] [(short)10])))))));
                            var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) 5156704961255668367LL)))))) ? (((var_2) ^ (7420998091173388144ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_0)))))));
                            var_24 = ((/* implicit */int) ((1) >= ((-(((/* implicit */int) (_Bool)1))))));
                        }
                        for (int i_6 = 2; i_6 < 11; i_6 += 2) /* same iter space */
                        {
                            var_25 = ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) || (((/* implicit */_Bool) (+((+(((/* implicit */int) var_4))))))));
                            var_26 = ((((/* implicit */_Bool) 1496256154)) ? (((/* implicit */unsigned long long int) (+(((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))) : (var_14));
                            var_27 *= ((/* implicit */short) ((((/* implicit */_Bool) (((-(-5156704961255668367LL))) - (((/* implicit */long long int) 4294967295U))))) ? (((/* implicit */unsigned long long int) (-(((int) 17709550663364684940ULL))))) : (13753327382856929785ULL)));
                            var_28 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) max((((/* implicit */signed char) (_Bool)1)), (arr_4 [i_0])))))));
                        }
                        for (signed char i_7 = 1; i_7 < 11; i_7 += 4) 
                        {
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)54))))) : (13753327382856929804ULL)))) ? (((var_13) | (((/* implicit */unsigned int) arr_11 [i_0] [i_1 + 3] [(_Bool)1] [i_7 - 1] [i_7 + 2] [i_7 + 1] [(signed char)7])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_14) != (((/* implicit */unsigned long long int) arr_8 [i_3] [i_3] [(short)6] [i_7 + 1] [i_7])))))))))));
                            var_30 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((13753327382856929783ULL) - (13753327382856929773ULL)))))) | (min((var_8), (((/* implicit */unsigned long long int) (unsigned short)0)))))), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))) == (((/* implicit */int) arr_10 [(short)8] [i_1] [(unsigned char)8] [(short)8] [0LL])))))));
                            var_31 *= ((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((13753327382856929763ULL) <= (((/* implicit */unsigned long long int) 1775518878)))))) : (max((((/* implicit */unsigned long long int) var_12)), (1983024963016139926ULL))));
                            var_32 = ((/* implicit */int) var_6);
                            arr_22 [i_7 + 2] [i_3] [i_2] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((var_4), (((/* implicit */short) ((unsigned char) (-(((/* implicit */int) arr_7 [i_0] [6U]))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 2) 
                        {
                            arr_27 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((5156704961255668366LL) << (((((/* implicit */int) (short)32767)) - (32767)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_13)));
                            arr_28 [5U] [i_1 + 3] [i_2] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), ((unsigned short)11)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_8 - 1] [i_1 + 2] [i_8 - 1] [i_8 - 1] [8U])) : (13964442610011346110ULL))))));
                            var_33 *= ((/* implicit */unsigned int) var_0);
                        }
                        arr_29 [i_3] = ((/* implicit */signed char) (+(1749370386U)));
                    }
                } 
            } 
        } 
    }
    var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-44)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((5156704961255668366LL) | (9185087851861912217LL))))))));
    var_35 = ((/* implicit */unsigned int) (!((_Bool)1)));
}
