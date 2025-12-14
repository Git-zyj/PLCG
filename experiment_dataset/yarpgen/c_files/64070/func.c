/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64070
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [15U] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_4 [i_0] [5ULL]))));
                            arr_13 [i_0] [i_1] [(signed char)9] [9ULL] = ((/* implicit */unsigned long long int) var_3);
                            var_13 = ((((/* implicit */_Bool) 1993792766U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15073503617455011380ULL));
                            arr_14 [i_0] [4U] [i_2] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)36872)), (68719476735ULL)));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) 1073741696U)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14863)))))))));
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (unsigned char i_5 = 1; i_5 < 17; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_1 + 3] [i_4] [i_4] [(short)1] [i_1 + 3] [(unsigned short)16] = min((min((15073503617455011380ULL), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_4] [i_5])))), (((/* implicit */unsigned long long int) (short)11849)));
                                var_15 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_5)) ? (arr_9 [i_0] [i_1] [i_4] [i_5 - 1]) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1 - 4] [i_4] [i_5 + 1]))))));
                                var_16 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) var_0)), (15073503617455011380ULL))))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */signed char) (-(((((/* implicit */int) (short)32752)) * (((/* implicit */int) ((short) arr_6 [i_0] [i_0] [i_0] [(unsigned short)13])))))));
                arr_23 [i_1] = ((/* implicit */unsigned long long int) var_1);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        for (unsigned short i_8 = 4; i_8 < 12; i_8 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    for (short i_10 = 4; i_10 < 12; i_10 += 3) 
                    {
                        {
                            arr_35 [(unsigned short)12] [i_9] [i_7] [i_8] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) arr_32 [i_7] [3U] [i_7] [i_7] [i_7] [i_7])) % (15073503617455011380ULL))))))));
                            arr_36 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) var_3);
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) -9088603566217986874LL)), (var_7))))) == (((/* implicit */int) arr_2 [i_10]))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_21 [i_8 - 4] [i_8 - 3] [i_8] [(signed char)4] [(short)7] [i_7])), (((((/* implicit */_Bool) ((unsigned char) 15073503617455011366ULL))) ? (max((3373240456254540259ULL), (((/* implicit */unsigned long long int) (signed char)56)))) : (((/* implicit */unsigned long long int) (~(var_2))))))));
            }
        } 
    } 
}
