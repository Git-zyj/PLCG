/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75228
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
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (max(((~(max((0ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))), (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (min((0ULL), (0ULL)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)0));
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) (unsigned char)0))))));
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)0))) ? (8ULL) : (268435455ULL)));
            arr_6 [i_0] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) arr_9 [i_0]);
            var_22 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0]);
            arr_10 [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (~(15940594894818458615ULL)))) ? (((((/* implicit */_Bool) (unsigned char)152)) ? (arr_9 [1]) : (arr_2 [i_2] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        }
        var_23 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_9 [i_0]), (((/* implicit */unsigned long long int) arr_7 [(unsigned char)18] [i_0] [i_0]))))) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) arr_3 [(unsigned char)2] [i_0] [(unsigned char)2])))))))), (((unsigned int) max((arr_8 [i_0]), (arr_9 [i_0]))))));
        var_24 = ((/* implicit */unsigned char) max((arr_8 [i_0]), (((/* implicit */unsigned long long int) ((int) 3937687480U)))));
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        arr_14 [i_3] = (~(arr_2 [i_3] [i_3] [i_3]));
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((int) (-(((/* implicit */int) (unsigned char)152)))))), (max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_16 [i_3 + 1] [i_3] [9U]))))), ((+(arr_11 [i_3])))))));
            var_26 = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) arr_3 [i_3] [i_3] [i_4])), ((~(arr_11 [i_3])))))));
        }
        var_27 = min((arr_0 [i_3]), (max((min((((/* implicit */int) (unsigned char)86)), (arr_1 [i_3] [i_3]))), (((int) (unsigned short)39607)))));
        arr_17 [i_3] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) (~(arr_9 [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_7 [22U] [i_3 + 1] [i_3]), ((unsigned char)86))))) : (max((18446744073441116164ULL), (((/* implicit */unsigned long long int) arr_11 [i_3]))))))));
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    {
                        var_28 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (_Bool)1)), (min((min((((/* implicit */unsigned long long int) -1853342484)), (arr_23 [i_6] [i_3] [i_3]))), (max((((/* implicit */unsigned long long int) (unsigned short)39607)), (13ULL)))))));
                        arr_27 [i_3] [i_3 + 1] [i_3 + 1] [i_3] [i_3] = ((/* implicit */unsigned long long int) (short)4179);
                    }
                } 
            } 
        } 
    }
}
