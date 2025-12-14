/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58548
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
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) max((((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-5273))))) % ((~(arr_0 [i_0]))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-5273)) : (((/* implicit */int) arr_1 [(unsigned char)0] [0U])))) - (var_0)))))))));
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (short)5266))) ? (min(((+(arr_0 [i_0 + 2]))), (((/* implicit */unsigned int) (+(var_0)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((var_8) | (((/* implicit */int) var_1)))) : (min((((/* implicit */int) (short)-5273)), (var_9))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_8 [i_0] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) ((unsigned char) min((var_7), (((/* implicit */long long int) var_5)))));
                            var_12 &= ((/* implicit */long long int) (((+(((/* implicit */int) min(((short)5274), ((short)-5279)))))) / ((~(((/* implicit */int) ((((/* implicit */_Bool) (short)-5275)) && (((/* implicit */_Bool) var_9)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_14 [i_1] = ((/* implicit */unsigned int) ((short) ((unsigned short) (~(var_9)))));
                            var_13 = ((/* implicit */long long int) ((((int) var_1)) + (((/* implicit */int) ((unsigned short) (short)-5291)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */int) ((unsigned short) (short)5272));
    var_15 ^= var_3;
}
