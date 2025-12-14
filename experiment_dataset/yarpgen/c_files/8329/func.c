/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8329
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
    var_10 = ((var_7) ? (min((0ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)19689)) : (-1087367581)))));
    var_11 = ((/* implicit */_Bool) ((int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_4)) : (4ULL))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_12 = ((unsigned int) arr_1 [i_0]);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_1])) ? (18446744073709551602ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))))))));
            arr_6 [i_1] = ((/* implicit */unsigned long long int) (+(max((((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */int) arr_4 [i_1])))), (var_0)))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)1590)) >= (((/* implicit */int) (signed char)-49)))) ? (min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_2] [i_0] [i_2])), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(short)2])))))) ? ((-(((/* implicit */int) (signed char)68)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_7 [i_0] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) && (((/* implicit */_Bool) ((886661609) | (((/* implicit */int) (_Bool)1)))))))))))));
                arr_12 [(signed char)8] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) - (((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2]))) + (-1557533938698248806LL))) - (((/* implicit */long long int) arr_8 [i_2] [i_3] [14U]))))));
            }
            for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 3) 
            {
                var_14 = ((((var_2) + (2147483647))) << (((max((((/* implicit */long long int) 3234768374U)), (max((7159867318103478256LL), (((/* implicit */long long int) 2742834897U)))))) - (7159867318103478256LL))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)5), ((signed char)30))))) % (var_9)));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_22 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 + 3] [i_4 + 1] [19])), (var_8)))) > (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (arr_22 [i_4 + 3] [i_4 + 2] [2U] [i_4 + 3] [i_4 + 3] [i_5]))))));
                        }
                    } 
                } 
                arr_23 [(signed char)4] [(signed char)4] |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) 27ULL)) ? (((/* implicit */int) arr_16 [i_0] [i_4 + 1] [i_4 - 1] [i_4 - 2] [i_4 + 3])) : (((/* implicit */int) arr_16 [i_0] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 2]))))));
                var_17 = ((/* implicit */unsigned long long int) arr_4 [i_4]);
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) (unsigned short)2486)) ? (var_3) : (((/* implicit */int) (signed char)-10)))), (((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) arr_22 [12] [4U] [i_4] [i_2] [i_2] [i_0])) ^ (var_0))) : ((+(((/* implicit */int) (_Bool)1)))))))))));
            }
            for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                arr_26 [(_Bool)1] [i_2] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_6))));
            }
            for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) % (arr_14 [i_8])));
                arr_30 [i_0] [i_2] [i_2] [(_Bool)1] = ((/* implicit */signed char) (-(((arr_10 [i_8] [i_2] [i_0] [i_0]) + (arr_10 [(unsigned short)1] [i_0] [i_2] [i_2])))));
                var_21 = ((/* implicit */_Bool) var_1);
            }
            var_22 -= ((/* implicit */_Bool) 2382666316U);
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_10 = 0; i_10 < 24; i_10 += 4) 
            {
                for (unsigned int i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    for (short i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */int) arr_17 [i_0] [i_9] [3] [i_9]);
                            var_24 = ((/* implicit */int) arr_27 [(_Bool)1] [i_9] [(unsigned short)7] [i_12]);
                            arr_39 [i_9] [7] [i_10] [i_9] [i_9] = ((/* implicit */unsigned short) var_7);
                        }
                    } 
                } 
            } 
            var_25 -= ((/* implicit */unsigned int) min(((((~(arr_29 [i_0] [i_0] [i_0] [i_9]))) << (((min((((/* implicit */long long int) arr_22 [i_9] [(unsigned short)9] [i_0] [(signed char)4] [i_0] [i_0])), (-7159867318103478256LL))) + (7159867318103478287LL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_0] [(_Bool)0] [i_9])) >> (((((/* implicit */int) arr_20 [i_9] [8U] [i_0])) - (19439))))))));
            var_26 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((var_3) - (((/* implicit */int) arr_3 [(_Bool)1])))))))));
        }
        var_27 = ((/* implicit */unsigned int) var_8);
        arr_40 [(_Bool)1] = min((((/* implicit */unsigned int) arr_36 [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0]))) | (((var_9) & (var_9))))));
    }
    var_28 = ((/* implicit */unsigned short) var_3);
}
