/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88744
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
    for (short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_17 *= ((/* implicit */unsigned char) (short)-23257);
                            var_18 = ((/* implicit */unsigned char) min((min((2061805494U), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)2)) <= (((/* implicit */int) (unsigned char)2))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                            var_19 = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-1466)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_2 [i_0] [i_1])) >> (((((/* implicit */int) arr_3 [i_1] [i_0])) - (9401))))), (((/* implicit */int) min((arr_8 [i_0]), (arr_5 [i_0]))))))) : (max((min((15219965534352438194ULL), (3226778539357113422ULL))), (15219965534352438217ULL)))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-1466)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_2 [i_0] [i_1])) >> (((((((/* implicit */int) arr_3 [i_1] [i_0])) - (9401))) + (19237))))), (((/* implicit */int) min((arr_8 [i_0]), (arr_5 [i_0]))))))) : (max((min((15219965534352438194ULL), (3226778539357113422ULL))), (15219965534352438217ULL))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) -1695302284)), (arr_4 [i_0] [i_1] [i_1])))))) ? (((/* implicit */int) ((short) arr_1 [i_0]))) : (((/* implicit */int) arr_0 [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            {
                var_20 *= ((/* implicit */signed char) max((((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_2)), (arr_13 [i_4] [i_4]))))))), (((short) 2307502972U))));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    for (int i_7 = 1; i_7 < 19; i_7 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) ((_Bool) 0U))), (3226778539357113405ULL))), (((/* implicit */unsigned long long int) var_2))));
                            arr_24 [i_5] [i_6 + 1] [i_5] [i_5] = ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_22 [7ULL] [i_6 + 1] [i_6] [i_6 + 1] [i_6] [(short)20]))))));
                            var_22 = ((/* implicit */int) (unsigned char)47);
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (unsigned char)163))));
                        }
                    } 
                } 
                arr_25 [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) == (arr_23 [i_4] [i_4] [i_5] [i_4] [i_4])))), ((+(3ULL))))))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 2; i_8 < 21; i_8 += 2) 
                {
                    for (short i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */int) ((unsigned short) ((unsigned int) (signed char)71)))) | (((/* implicit */int) min((((/* implicit */short) arr_15 [i_8 - 2])), ((short)-20440)))))))));
                            var_25 *= arr_19 [i_8 - 1] [i_8 - 1];
                            arr_31 [17U] [i_5] [i_5] [i_9] = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) (signed char)71)))));
                            var_26 = ((/* implicit */unsigned long long int) ((unsigned int) arr_14 [i_8 - 1]));
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) min((1987464316U), (((/* implicit */unsigned int) min(((unsigned short)29294), (((/* implicit */unsigned short) (_Bool)1)))))));
}
