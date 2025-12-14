/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71122
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
    var_18 = ((/* implicit */_Bool) min((var_18), (var_2)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) 15418724967450962205ULL))) / (((int) arr_5 [i_0] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((((var_14) / (((/* implicit */int) arr_0 [(short)3])))) / ((-(((/* implicit */int) (unsigned short)60055))))))) : (max((((/* implicit */long long int) var_1)), ((-(var_10))))))))));
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_15))));
                var_21 *= ((/* implicit */int) var_2);
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((min((((((/* implicit */int) var_13)) ^ (((/* implicit */int) (unsigned short)14859)))), (((/* implicit */int) var_4)))) + (2147483647))) << (((((long long int) ((int) var_15))) - (29916LL))))))));
                        var_23 *= ((/* implicit */signed char) var_2);
                        arr_11 [i_0] |= ((/* implicit */short) ((int) max((arr_1 [i_1] [i_1]), (((/* implicit */unsigned int) var_9)))));
                    }
                    var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((+(((/* implicit */int) arr_3 [i_1]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) % (((unsigned int) var_9))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [(unsigned short)10] [i_1] [(unsigned short)10] [i_1] [i_1]))))) ? (576460752303423487ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) / (var_12))))))));
                }
                var_25 += min((((/* implicit */long long int) ((int) ((unsigned short) var_9)))), (((((((/* implicit */_Bool) (short)20940)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [(_Bool)1] [i_0] [i_0]))) : (var_12))) % (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))))) : (var_6))), (((((_Bool) var_17)) ? (((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_4])) == (((/* implicit */int) var_5)))))))))))));
        var_27 *= ((/* implicit */unsigned int) ((int) max((max((((/* implicit */unsigned long long int) var_2)), (var_6))), (((/* implicit */unsigned long long int) var_4)))));
    }
    for (int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            for (unsigned short i_7 = 1; i_7 < 22; i_7 += 4) 
            {
                for (unsigned int i_8 = 1; i_8 < 21; i_8 += 1) 
                {
                    {
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) ((unsigned short) (~(var_14))))))))));
                        var_29 *= ((/* implicit */signed char) var_6);
                    }
                } 
            } 
        } 
        var_30 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (var_0)))) ? (((/* implicit */unsigned long long int) (~(arr_21 [i_5] [i_5] [i_5] [i_5])))) : (arr_25 [i_5] [i_5] [i_5])));
        var_31 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_5] [i_5])) - (var_14)))) >= (((((/* implicit */unsigned long long int) max((var_12), (((/* implicit */long long int) var_1))))) ^ (max((((/* implicit */unsigned long long int) -203699387)), (var_6)))))));
    }
    for (long long int i_9 = 4; i_9 < 10; i_9 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 3) 
        {
            for (short i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                {
                    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) var_6))));
                    var_33 |= ((/* implicit */signed char) var_17);
                    var_34 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_18 [i_10 + 1] [i_9 - 2] [i_11])) ? (((/* implicit */int) ((unsigned short) var_6))) : (((/* implicit */int) var_13)))) >> ((((~((~(var_6))))) - (8567331003540112040ULL)))));
                }
            } 
        } 
        var_35 = ((/* implicit */int) min((var_35), ((+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) 0U)) : (-5753778888200850960LL)))))))));
        var_36 += var_6;
    }
}
