/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/803
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max((min(((~(-264530009))), (((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) ((signed char) arr_1 [(_Bool)1])))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_3 [i_3 - 1] [i_3 - 1] [i_3 - 1]))));
                            arr_10 [i_1] [i_1] [i_1] [i_1] [(unsigned char)14] &= ((/* implicit */long long int) var_11);
                        }
                    } 
                } 
                arr_11 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(arr_4 [6LL] [6LL] [(_Bool)1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 3) 
    {
        for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            {
                arr_17 [i_5] [(unsigned char)17] = ((/* implicit */unsigned short) ((signed char) var_9));
                var_18 = (!(((/* implicit */_Bool) (signed char)-32)));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        for (long long int i_8 = 1; i_8 < 21; i_8 += 3) 
                        {
                            {
                                arr_27 [i_4] [i_4] [i_4] [i_4] [(unsigned short)13] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) max((var_11), (((/* implicit */short) arr_18 [i_4] [i_4 - 2] [i_4 + 1] [i_8 + 1])))))));
                                var_19 = ((/* implicit */_Bool) (~(((((/* implicit */int) var_4)) & (var_3)))));
                                arr_28 [i_4] [i_5] [i_4] [18ULL] [i_8 - 1] [i_5] [4U] = ((/* implicit */_Bool) ((max((((/* implicit */int) arr_12 [(unsigned char)3])), (((int) (unsigned char)117)))) + (((/* implicit */int) arr_16 [(signed char)6] [(signed char)6]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_9 = 1; i_9 < 19; i_9 += 2) 
                {
                    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 23; i_11 += 2) 
                        {
                            {
                                arr_35 [i_4] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) -638009358730382515LL);
                                var_20 = ((/* implicit */unsigned int) max((arr_25 [i_4] [i_4] [(signed char)15] [i_4 - 1] [i_4] [i_4]), (((/* implicit */unsigned long long int) ((var_15) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47266))))))));
                                var_21 = ((/* implicit */unsigned long long int) (unsigned short)18272);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (short i_13 = 3; i_13 < 22; i_13 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (+(((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_30 [i_4] [(_Bool)0] [11])))))))))));
                            arr_40 [i_12] [i_12] = ((/* implicit */short) -638009358730382495LL);
                            arr_41 [i_4 - 2] [i_4] [i_12] [i_4] [i_4] = ((/* implicit */short) var_2);
                            var_23 = ((unsigned short) ((((/* implicit */int) (unsigned char)58)) * (((/* implicit */int) (short)-8718))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) var_0);
}
