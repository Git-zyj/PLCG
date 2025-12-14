/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69225
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
    var_12 = ((/* implicit */unsigned char) var_7);
    var_13 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned char) (+(((int) var_3))));
                        arr_8 [i_0] [i_1 - 1] [i_2 + 3] [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) -1427017885970869328LL);
                        arr_9 [i_0] [i_0] = max((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 4294967292U)) : (var_11))), (((((/* implicit */_Bool) var_6)) ? ((~(var_2))) : (((/* implicit */unsigned long long int) 4294967293U)))));
                        arr_10 [i_0] [i_0] [i_1 - 2] [i_2] [i_3 + 1] [i_3 - 1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((18074238414304258124ULL) + (((/* implicit */unsigned long long int) var_6))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_14 [i_2] [i_2] [i_2] [i_0] [i_2] [i_2 + 3] = ((/* implicit */_Bool) ((arr_2 [i_0] [i_0] [i_4]) ? (((/* implicit */unsigned long long int) ((((((var_3) - (((/* implicit */int) var_0)))) + (2147483647))) >> (((arr_13 [i_0] [i_0] [i_1 - 1] [i_2 + 1]) + (1437698139)))))) : (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_6 [i_0])) : (5ULL))), (((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1))))))));
                        var_15 *= ((/* implicit */_Bool) max((var_9), (((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned long long int) var_0)), (var_9))) : (min((var_2), (((/* implicit */unsigned long long int) arr_6 [i_2]))))))));
                        arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((935868777726026984ULL), (var_11)))) ? (((/* implicit */int) ((_Bool) 1843256415))) : (((/* implicit */int) ((_Bool) var_4)))))) >= (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (var_1)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (1479547211853570300ULL))) : (8756815655047325280ULL)))));
                    }
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-15484)))), (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) min((arr_13 [i_2 + 3] [i_2] [i_2 + 3] [i_2 + 3]), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 1024LL)))))))) : (4785455733182349829ULL)))));
                }
                var_17 = ((((/* implicit */_Bool) (-(var_6)))) ? ((-(arr_11 [i_1] [i_1 - 2] [i_1] [i_1 - 2]))) : (((/* implicit */unsigned long long int) max((arr_13 [i_0] [i_1 - 2] [i_1 - 2] [i_0]), (((/* implicit */int) max((arr_3 [i_0] [i_0]), ((unsigned char)48))))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_7 = 2; i_7 < 19; i_7 += 3) /* same iter space */
                            {
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (arr_16 [i_1 + 1]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))))) || (((/* implicit */_Bool) min((min((var_9), (((/* implicit */unsigned long long int) arr_0 [i_7])))), (((/* implicit */unsigned long long int) (unsigned char)218)))))));
                                var_19 = ((/* implicit */_Bool) 7U);
                            }
                            for (unsigned char i_8 = 2; i_8 < 19; i_8 += 3) /* same iter space */
                            {
                                var_20 *= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_8 - 2] [i_8 - 2] [i_1] [i_6])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_12 [i_8 - 2] [i_8 - 2] [i_1] [i_6 - 1]))))), (min((((/* implicit */unsigned long long int) arr_22 [i_0] [i_1] [i_5] [i_6 - 1] [15LL] [i_1] [(short)17])), (arr_11 [i_6] [i_6] [i_6 - 1] [(_Bool)1]))));
                                arr_29 [i_0] [i_1 - 2] [i_0] [i_6] [i_8] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_23 [i_1 + 1] [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned int) arr_17 [i_1 + 1] [i_1 + 1] [i_5] [19LL]))))), (min((((/* implicit */unsigned long long int) arr_22 [i_6 - 1] [i_6 - 1] [i_6 - 1] [(_Bool)1] [i_6 - 1] [i_6 - 1] [i_6 - 1])), (var_1)))));
                                var_21 = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) arr_22 [i_0] [13ULL] [i_0] [i_6] [i_6] [i_0] [i_8])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) ((unsigned char) var_9))))), (((/* implicit */unsigned long long int) (+(((-1224226731295845552LL) / (var_6))))))));
                            }
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(4785455733182349836ULL))) % (((/* implicit */unsigned long long int) min((1696218546), (((/* implicit */int) arr_12 [i_5] [i_5] [i_0] [i_5])))))))) ? (((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 2] [i_0] [i_6 - 1]))))) : (((/* implicit */unsigned long long int) 944078748177653403LL))));
                            arr_30 [i_0] [i_1] [i_0] [i_6] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((3674579863U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_1])) == (arr_28 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 + 1] [i_1])) < (((/* implicit */int) ((((/* implicit */_Bool) 4785455733182349837ULL)) && (((/* implicit */_Bool) (unsigned char)125))))))))) : (((((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)73))) % ((~(var_7)))))));
                            arr_31 [i_0] [i_5] [(short)18] [i_0] = (-(min((((/* implicit */unsigned long long int) ((long long int) arr_26 [i_0] [i_0] [i_1] [i_0] [i_0]))), (max((var_11), (((/* implicit */unsigned long long int) arr_12 [i_0] [(_Bool)1] [i_0] [i_6])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
