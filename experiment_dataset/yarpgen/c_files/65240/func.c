/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65240
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) 3472202725U);
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-53)) == (1193061891)));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [9ULL] [i_1] [i_0 - 1])) ? (((arr_4 [i_1] [i_1]) ? (arr_5 [i_0]) : (arr_5 [i_1]))) : (((/* implicit */unsigned int) ((int) (_Bool)1)))));
                    arr_10 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_0] [i_0])) ? (var_11) : (822764574U)))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))) : (arr_7 [i_0 - 1])));
                }
            } 
        } 
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_15 [i_3 - 1] [i_3] = ((/* implicit */unsigned long long int) arr_6 [i_3] [i_3 - 1] [i_3]);
        arr_16 [i_3] [i_3] = ((/* implicit */short) arr_14 [i_3 - 1]);
        arr_17 [i_3] = ((/* implicit */unsigned long long int) arr_8 [i_3] [i_3] [i_3]);
        arr_18 [i_3] = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned long long int) arr_8 [i_3] [i_3 - 1] [i_3])), (((((/* implicit */_Bool) arr_0 [i_3 - 1] [(short)11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26375))) : (10773213587214653377ULL)))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 20; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 18; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    {
                        arr_30 [i_4] [i_5] [i_6 - 2] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) arr_21 [i_4]);
                        arr_31 [i_6 + 3] [(unsigned short)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14781804485893283893ULL)) ? (822764574U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)27)))))) ? (((((/* implicit */_Bool) 4138456690291148318LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26375))) : (arr_27 [i_4] [i_4] [i_4] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_5 - 1])))));
                        arr_32 [i_7] [i_6 + 3] [i_5 - 1] [i_4] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 1415144016287908712ULL)) ? (5383806675796320827ULL) : (arr_28 [i_4] [i_5] [i_4] [i_5]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (int i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            arr_36 [i_4] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_21 [i_4])) < (((/* implicit */int) (_Bool)0))))) * (((/* implicit */int) (short)18306))));
            arr_37 [i_8] = ((/* implicit */short) (-(arr_35 [i_8] [i_4])));
            arr_38 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_4])) / (((/* implicit */int) arr_21 [i_4]))));
        }
        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) 
        {
            arr_41 [i_9] [i_9] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_34 [i_4]))));
            arr_42 [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-28084)) ? (2993840529U) : (131436590U)))) / (((((/* implicit */_Bool) 1624090053U)) ? (var_14) : (576460752303423487ULL)))));
        }
        for (unsigned long long int i_10 = 3; i_10 < 18; i_10 += 3) 
        {
            arr_45 [i_4] [i_4] [i_4] = ((unsigned long long int) ((((/* implicit */int) var_9)) != (var_3)));
            arr_46 [i_4] [i_10 + 1] = ((/* implicit */int) var_16);
        }
    }
}
