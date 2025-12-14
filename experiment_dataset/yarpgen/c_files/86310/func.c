/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86310
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((9223372036854775807LL) != (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (short)9676))) << (((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)20228)) : (132120576))) - (20205))))))));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) max((((unsigned int) arr_3 [i_1 - 1] [i_1 + 1])), (((/* implicit */unsigned int) ((_Bool) ((-2138685774) <= (((/* implicit */int) arr_0 [i_0]))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        arr_11 [i_2] = ((/* implicit */short) (~(((unsigned long long int) arr_9 [i_2]))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                {
                    arr_16 [i_3] [i_2] = ((/* implicit */unsigned int) (short)27734);
                    arr_17 [i_2] [i_2] = ((/* implicit */unsigned int) ((long long int) max((-1302277908), (((((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_15 [i_2] [i_3] [i_4])) : (((/* implicit */int) (signed char)-8)))))));
                }
            } 
        } 
        arr_18 [i_2] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)10)))))), (((((/* implicit */_Bool) 132120594)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))) : ((~(arr_10 [i_2] [i_2])))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 4) 
        {
            arr_21 [i_2] [i_5] = ((/* implicit */int) ((short) ((var_8) % (((/* implicit */int) var_13)))));
            arr_22 [i_5] [i_2] = ((/* implicit */unsigned int) arr_9 [i_2]);
        }
    }
    for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        arr_26 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) / (((/* implicit */int) ((short) (_Bool)1)))));
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            for (short i_8 = 3; i_8 < 15; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    {
                        arr_34 [i_6] [i_8 + 2] = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */unsigned int) 2147483647)), (arr_31 [i_6] [i_7]))));
                        arr_35 [i_7] [i_7] [i_9] |= ((/* implicit */unsigned int) (~(((((/* implicit */int) (short)20228)) / (2147483647)))));
                    }
                } 
            } 
        } 
        arr_36 [i_6] [i_6] = ((/* implicit */short) ((unsigned long long int) (unsigned short)33911));
        arr_37 [i_6] [i_6] = ((/* implicit */unsigned long long int) var_3);
    }
}
