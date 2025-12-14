/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80492
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 8; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)16984))));
                            arr_12 [i_0] [i_2] [i_3 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_2 + 2] [i_3 - 1] [i_3] [i_3 + 1] [i_3] [i_3 - 2]))))) : (var_8)));
                            arr_13 [i_1] [i_2 + 1] [i_2] = ((/* implicit */int) 1915643255878713783LL);
                        }
                    } 
                } 
                var_10 = ((/* implicit */short) (+((~(((/* implicit */int) (short)(-32767 - 1)))))));
                var_11 -= ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned long long int) arr_6 [i_0])), ((+(var_6))))));
                var_12 += ((/* implicit */short) ((((/* implicit */_Bool) (short)28567)) || (((/* implicit */_Bool) (short)-10474))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) var_1);
    var_14 -= (((+(((/* implicit */int) (short)3968)))) >> (((/* implicit */int) var_2)));
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        for (int i_5 = 3; i_5 < 8; i_5 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 2; i_7 < 6; i_7 += 1) 
                    {
                        {
                            arr_28 [i_4] [i_5] [i_4] [i_7] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) & (((/* implicit */int) ((((/* implicit */int) arr_24 [i_7] [i_7 + 3] [i_7 - 1] [i_5 + 2] [i_5 + 2] [i_5 + 2])) >= ((~(((/* implicit */int) arr_1 [i_7])))))))));
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) arr_23 [i_4] [i_6] [i_6]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_8 = 2; i_8 < 8; i_8 += 4) 
                {
                    for (long long int i_9 = 4; i_9 < 7; i_9 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) ((short) var_1));
                            arr_35 [6U] [i_5] = ((/* implicit */signed char) max((arr_33 [i_8] [i_8 - 2] [i_8] [i_5] [i_4]), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_15 [i_8]))) + (((/* implicit */int) var_4)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_10 = 1; i_10 < 9; i_10 += 3) 
                {
                    for (signed char i_11 = 1; i_11 < 8; i_11 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) (unsigned short)48551);
                            arr_43 [i_4] [2U] [2U] [i_4] [i_4] [i_4] = (-(((/* implicit */int) (unsigned char)56)));
                            arr_44 [i_4] [i_5] [i_10] [i_10] = ((/* implicit */_Bool) ((-4907065340683627047LL) / (-4907065340683627047LL)));
                            arr_45 [i_4] [i_5 + 1] [i_10] [i_5 + 1] = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
                            arr_46 [i_4] [i_4] [i_10 + 1] [i_11] = ((/* implicit */unsigned short) ((unsigned long long int) -239878038485442210LL));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    for (int i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        {
                            arr_54 [i_12] &= ((/* implicit */unsigned int) ((short) arr_6 [i_4]));
                            arr_55 [i_4] [i_5] [i_5] [i_12] [(_Bool)1] [i_13] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-107)) ? (-1) : (((/* implicit */int) arr_6 [i_4]))))) ^ (((long long int) 2158809118U)))));
                            var_18 -= ((/* implicit */unsigned long long int) (+(arr_7 [i_5 - 1] [i_5 - 1] [i_12] [i_4])));
                            var_19 += ((/* implicit */short) arr_3 [i_4]);
                        }
                    } 
                } 
            }
        } 
    } 
}
