/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75764
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
    var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) 201326592)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_1))))))) : (max(((+(var_14))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_16)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] &= ((/* implicit */_Bool) (~(((/* implicit */int) (short)32742))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_7 [i_0] [i_0]))));
                            arr_14 [i_0] [i_1] [i_0] [i_2] [i_3] &= ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_0]))))), (((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [(_Bool)1] [(_Bool)1]))) : (arr_11 [i_0] [i_1] [i_2] [0ULL] [i_3])))))) || (((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [i_3])), (14437454087229413075ULL))), (((/* implicit */unsigned long long int) ((int) var_4)))))));
                            arr_15 [i_0] [8ULL] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((max((201326567), (((/* implicit */int) (signed char)101)))), (((arr_0 [i_1]) ? (((/* implicit */int) arr_10 [i_0] [i_1] [(signed char)0] [i_2])) : (((/* implicit */int) (signed char)109)))))))));
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) ((arr_12 [i_0] [5ULL] [i_2] [i_3]) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))))))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_4 [i_0] [i_1] [i_2]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 8; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        {
                            var_24 *= ((/* implicit */unsigned char) ((max((arr_1 [i_0] [i_0]), (((/* implicit */int) arr_19 [i_0] [i_4] [i_1] [i_0])))) < ((~(((/* implicit */int) arr_19 [i_0] [i_1] [i_4] [i_0]))))));
                            var_25 -= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) ((short) 201326567)))))));
                            var_26 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_2 [(unsigned short)2] [i_1])) : (((/* implicit */int) (unsigned short)1630)))), (((/* implicit */int) var_4))))) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (_Bool)1))));
                            var_27 &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_19 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_5])) : (((/* implicit */int) arr_19 [i_4 + 2] [i_5] [i_5] [i_5])))), ((+(((/* implicit */int) arr_19 [i_4 + 2] [i_5] [i_5] [i_5]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
    {
        for (unsigned long long int i_7 = 4; i_7 < 20; i_7 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        {
                            var_28 -= ((/* implicit */signed char) 127LL);
                            var_29 &= ((/* implicit */signed char) min((max((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) (signed char)3)))), (((/* implicit */unsigned long long int) var_3))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */signed char) min((var_30), (((signed char) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_19))))) : (4009289986480138540ULL))))));
            }
        } 
    } 
}
