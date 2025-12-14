/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78789
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
    var_19 = ((/* implicit */int) var_12);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [6U] [i_0 + 2])) ? (arr_4 [14]) : (arr_1 [2ULL] [i_0 - 3])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [16])) ? (3280459235U) : (((/* implicit */unsigned int) arr_4 [(unsigned short)16])))))))));
            var_21 = ((/* implicit */int) var_8);
        }
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) min((var_15), (var_18)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : ((+(arr_5 [i_2] [i_0] [i_2]))))));
            var_23 += ((/* implicit */unsigned char) (signed char)78);
            var_24 = ((/* implicit */unsigned int) ((unsigned short) min((arr_6 [i_0 - 1] [i_2] [i_2]), (((/* implicit */int) var_7)))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned short) ((unsigned char) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_15)) : (1014508061U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_3] [i_0 - 1])) - (((/* implicit */int) arr_8 [i_3] [i_0 + 1]))))))));
            var_26 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_3] [i_0 - 1]))))), (var_14));
        }
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                for (unsigned int i_6 = 3; i_6 < 17; i_6 += 3) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_7 [i_4] [i_6 - 2] [i_4]) : (arr_7 [i_4] [i_6 - 2] [i_6 - 2])))) ? ((+(arr_7 [i_4] [i_6 + 1] [i_6 - 2]))) : (((/* implicit */int) ((arr_7 [i_4] [i_6 - 2] [i_6]) != (((/* implicit */int) var_2))))))))));
                        var_28 &= ((/* implicit */signed char) ((min((3280459235U), (((/* implicit */unsigned int) var_18)))) ^ (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_4])) ? (var_17) : (((/* implicit */int) arr_16 [i_0 + 1] [i_6] [i_5] [i_4] [i_6])))) ^ (((((/* implicit */int) var_2)) ^ (var_15))))))));
                        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-80))))))))));
                        arr_17 [i_0] [i_5] [i_0] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_4 [i_0]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        var_30 = ((/* implicit */unsigned char) (+((+(arr_20 [i_7])))));
        arr_21 [i_7] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_19 [i_7])) ? (((/* implicit */unsigned long long int) max((arr_14 [i_7]), (arr_3 [i_7] [i_7] [i_7])))) : ((+(arr_18 [i_7]))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) max((arr_14 [i_7]), (((/* implicit */int) var_2))))) | (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) 1668857837)) : (arr_5 [i_7] [i_7] [i_7]))))))));
        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((min((max((var_9), (((/* implicit */int) (unsigned short)12908)))), (max((var_17), (((/* implicit */int) arr_15 [i_7] [i_7] [(_Bool)1] [i_7])))))) < (((/* implicit */int) min((arr_2 [i_7]), (((/* implicit */unsigned char) (signed char)93))))))))));
        var_32 = ((((/* implicit */_Bool) 3227477020U)) ? (max((((/* implicit */unsigned int) arr_0 [i_7] [i_7])), (var_1))) : (((/* implicit */unsigned int) (+(arr_0 [i_7] [i_7])))));
        arr_22 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2525051204U)) ? (min((arr_12 [i_7] [i_7] [i_7]), (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) max((((arr_14 [i_7]) / (((/* implicit */int) var_11)))), (min((arr_14 [i_7]), (((/* implicit */int) var_2)))))))));
    }
    var_33 = ((/* implicit */int) ((_Bool) var_11));
}
