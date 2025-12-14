/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75623
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
    var_12 -= ((/* implicit */unsigned int) (~(min((((/* implicit */int) min((var_2), (var_7)))), ((+(((/* implicit */int) var_7))))))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) >> (((/* implicit */int) var_10))));
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((/* implicit */_Bool) 2280704210U)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_1))))))));
    var_15 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        arr_9 [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65525)))) << (((((((/* implicit */_Bool) 9678769015291700634ULL)) ? (((/* implicit */int) (unsigned short)52503)) : (((/* implicit */int) (_Bool)1)))) - (52485)))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned int) min((var_16), (var_3)));
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [(_Bool)1] [i_0]))) - (var_0))))))))));
                            arr_12 [i_0] [20U] [i_2] [i_3 + 2] = ((/* implicit */unsigned long long int) arr_1 [i_1] [i_4]);
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) var_11))))));
                            var_20 = ((/* implicit */unsigned long long int) var_3);
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_4 [i_0 + 1] [i_1] [i_2])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) <= (arr_13 [i_0] [i_1] [i_2] [i_2] [i_5])))) : (((/* implicit */int) ((var_0) > (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                            arr_15 [i_0 + 1] [i_0] = ((var_6) ? (arr_4 [9U] [i_3 + 2] [i_5]) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_0)))));
                        }
                        for (unsigned int i_6 = 1; i_6 < 23; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) var_4)) + (var_9)))));
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_7 [i_6 + 1] [i_3 - 1] [i_2] [i_1] [i_0])))))))) : (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))) : (min((var_5), (((/* implicit */unsigned long long int) var_10)))))))))));
                            arr_19 [i_6] [i_6] [i_6] [i_6] [i_0] = ((/* implicit */unsigned int) var_8);
                            var_24 = ((var_0) > (max((((/* implicit */unsigned int) var_1)), (var_4))));
                        }
                        arr_20 [i_0] [i_0] [i_0] [i_0] = min((min((var_3), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) ((((1354486973U) <= (4072447979U))) || (((/* implicit */_Bool) 3690355605U))))));
                        arr_21 [i_1] = ((var_9) / (((/* implicit */unsigned long long int) (~(max((var_0), (((/* implicit */unsigned int) var_2))))))));
                    }
                    for (unsigned short i_7 = 1; i_7 < 21; i_7 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_8 = 2; i_8 < 23; i_8 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (+(((2947306851U) | (13U))))))));
                            arr_26 [i_0 + 1] [i_1] [i_2] [i_7] [i_7] [i_8] = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)55574))))) ? (4003036424U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2644532285U))))))))));
                            var_27 = ((/* implicit */unsigned short) min((var_27), (arr_6 [i_0 + 1] [i_2] [i_7] [i_7])));
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) var_6))));
                        }
                        for (unsigned long long int i_9 = 2; i_9 < 23; i_9 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) var_10))));
                            arr_30 [i_0] [i_1] [i_0] [i_9] [i_7 + 3] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)60088))));
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65523))))) : (((/* implicit */int) var_7))))) ? ((-(7017208147910087385ULL))) : ((~(max((var_9), (((/* implicit */unsigned long long int) var_11))))))));
                            arr_31 [i_0 + 1] [12U] [(unsigned short)10] = ((/* implicit */unsigned long long int) (~(991317914U)));
                        }
                        for (unsigned long long int i_10 = 2; i_10 < 23; i_10 += 1) /* same iter space */
                        {
                            arr_35 [i_0 - 1] [5U] [i_2] [i_7] [i_10] [i_0 + 1] [5U] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) << (((((/* implicit */int) var_11)) - (26170)))))) ? (max((((/* implicit */unsigned int) var_11)), (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_5))))))))) ? ((~(4294967292U))) : (max((((/* implicit */unsigned int) min(((unsigned short)65534), (var_7)))), (max((((/* implicit */unsigned int) (unsigned short)19)), (806807631U))))));
                            arr_36 [i_0] [i_1] [i_2] [i_1] [i_10 + 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2U)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51638)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)24)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (min((var_8), (((/* implicit */unsigned long long int) 4294967287U)))))) > (((((/* implicit */_Bool) var_4)) ? (max((((/* implicit */unsigned long long int) var_3)), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_8))))))))));
                            var_31 &= ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)26589)))) > (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_11)))))));
                        }
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (((min((21U), (((/* implicit */unsigned int) var_6)))) >> (((/* implicit */int) ((var_0) < (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
                        var_33 = (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_0] [(_Bool)1] [i_1] [(_Bool)1] [(_Bool)1] [i_7] [19U])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_0))) >> (((max((((/* implicit */unsigned int) (unsigned short)51984)), (var_4))) - (3393981557U)))))));
                    }
                    for (unsigned short i_11 = 1; i_11 < 21; i_11 += 4) /* same iter space */
                    {
                        arr_40 [i_11 + 2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) var_0);
                        var_34 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (((_Bool)1) && ((_Bool)1)))) : (((/* implicit */int) (unsigned short)32768))))) ? (min((((((/* implicit */_Bool) var_9)) ? (arr_39 [i_0 + 1] [i_1] [i_1] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) var_4)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) min((1896813421U), (4134139985U)))) : (max((var_8), (((/* implicit */unsigned long long int) var_6)))))));
                    }
                    arr_41 [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) min((max(((~(((/* implicit */int) var_6)))), (((/* implicit */int) (unsigned short)65531)))), (((/* implicit */int) var_1))));
                }
            } 
        } 
    } 
}
