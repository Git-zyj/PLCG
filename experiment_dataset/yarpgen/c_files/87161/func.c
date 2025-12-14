/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87161
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
                {
                    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_7 [i_0] [i_0 + 1] [i_0] [14ULL]) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))))))), (575334852396580864LL))))));
                    var_12 = (_Bool)1;
                    var_13 = ((/* implicit */long long int) var_7);
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((/* implicit */int) ((((/* implicit */int) (signed char)31)) != (((/* implicit */int) (signed char)-46)))))))) ? (((/* implicit */int) min(((signed char)19), ((signed char)59)))) : (((((/* implicit */_Bool) -85637801)) ? (((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (signed char)-31))))) : (((/* implicit */int) max(((unsigned char)236), (((/* implicit */unsigned char) var_5))))))))))));
                }
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
                {
                    arr_10 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_9 [i_3] [i_0 + 1] [i_0 + 1])), ((-(arr_6 [(_Bool)1] [i_1] [(short)16])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1])) ? (arr_8 [i_3]) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))) : ((((!(((/* implicit */_Bool) (unsigned char)232)))) ? (((/* implicit */unsigned long long int) ((int) var_5))) : (((((/* implicit */_Bool) var_1)) ? (arr_5 [i_0] [i_1] [i_3]) : (((/* implicit */unsigned long long int) 1701288389065347086LL))))))));
                    arr_11 [i_0 + 1] [i_1] [i_3] = ((/* implicit */short) ((((((((/* implicit */long long int) var_4)) <= (-9051385775858415794LL))) ? (max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_9 [i_3] [i_1] [i_3])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_9 [i_3] [i_1] [(_Bool)1]))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)18)) || (((/* implicit */_Bool) arr_2 [i_0 + 1]))))))));
                }
                for (unsigned char i_4 = 3; i_4 < 19; i_4 += 2) 
                {
                    var_15 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_13 [(unsigned short)19] [i_1] [i_1] [i_4])) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 515603239504903158LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0]))) : (var_1)))))));
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) <= (var_1))) ? (max((arr_5 [i_0 + 1] [i_1] [i_0 + 1]), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6541485557699310445LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_4]))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0 + 1])))))))));
                }
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 1; i_6 < 19; i_6 += 1) 
                    {
                        var_17 = ((/* implicit */long long int) arr_2 [i_5 + 1]);
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            var_18 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_13 [i_0] [i_0] [i_6 - 1] [i_0])))))) > ((+(-2523442290282020610LL))))) ? (min((((/* implicit */unsigned int) (((_Bool)1) ? (var_3) : (((/* implicit */int) arr_13 [i_0 + 1] [i_1] [i_6 - 1] [i_7]))))), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                            var_19 = ((/* implicit */signed char) ((((_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_17 [i_7] [i_0] [14] [i_0])), (var_2)))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)249)) : (((arr_22 [i_7] [i_5] [i_6] [i_5] [i_1] [i_0] [i_0]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_0 + 1]))))))));
                        }
                        var_20 = ((/* implicit */long long int) ((short) ((signed char) arr_19 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 + 1])));
                        var_21 = ((/* implicit */short) ((((int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))) : (arr_8 [i_6 - 1])))) << (((max((((((/* implicit */_Bool) 1086219010U)) ? (((/* implicit */int) (unsigned short)32219)) : (((/* implicit */int) (signed char)-32)))), (((/* implicit */int) max(((signed char)-46), (((/* implicit */signed char) (_Bool)0))))))) - (32212)))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_22 *= ((/* implicit */_Bool) 18446744073709551615ULL);
                        arr_25 [i_0] [i_1] [i_8] [i_0] [i_0] = min(((unsigned short)64633), ((unsigned short)24988));
                    }
                }
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_23 += ((/* implicit */signed char) ((short) max((((((/* implicit */_Bool) -5117710858279275563LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-515603239504903174LL))), (((/* implicit */long long int) (_Bool)1)))));
                            arr_31 [i_9] = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 3246176430567856589LL)) ? (9149684326973324247LL) : (((/* implicit */long long int) 402653184))))))));
                            var_24 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [11ULL] [i_0 + 1] [i_1] [i_0 + 1] [i_10])))))) > (min((var_4), (((/* implicit */unsigned int) arr_22 [i_10 - 1] [7ULL] [(_Bool)1] [i_1] [i_1] [i_1] [i_0]))))));
                            var_25 = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) arr_26 [i_0] [i_0])))), (((((/* implicit */_Bool) ((int) var_2))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_17 [i_10] [i_10] [10U] [i_10])), (var_10))))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */_Bool) ((var_1) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0 + 1] [i_1] [i_1] [i_1] [i_0] [i_0 + 1])))));
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) min((-4123947236316516682LL), (((/* implicit */long long int) var_0))))) ? (3419798628U) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)52632))))))));
    var_28 = ((((/* implicit */_Bool) (((~(((/* implicit */int) var_7)))) % ((-(-2114861552)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) : (var_4));
}
