/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94446
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) (-(((-1288920844) % (((/* implicit */int) (_Bool)1))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_13) > (-2081024818)))) <= ((~(1486251039)))));
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    var_16 = ((/* implicit */int) var_6);
                    arr_8 [i_2] = ((/* implicit */unsigned char) (+(var_5)));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (~((~(var_0)))));
                    var_17 = ((/* implicit */signed char) (-(((/* implicit */int) (short)(-32767 - 1)))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    var_18 |= ((/* implicit */int) ((((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */int) (short)-32741)) : (((/* implicit */int) (short)7)))) <= (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)110)))))));
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) (short)-32764))));
                        var_19 = ((/* implicit */int) min((var_19), ((-(((/* implicit */int) (short)-1074))))));
                        arr_15 [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) (unsigned char)195)))));
                        var_20 += ((/* implicit */short) ((((/* implicit */int) (short)1068)) + (-1)));
                        var_21 = ((/* implicit */unsigned long long int) (unsigned char)160);
                    }
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((var_3) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1846410610))))) : (((/* implicit */int) (_Bool)1)))))));
                    arr_16 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 13)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((805306368) | (((/* implicit */int) (unsigned short)55503))));
                                var_24 += ((/* implicit */short) ((((/* implicit */int) (signed char)-14)) % ((+(((/* implicit */int) (short)-32756))))));
                                var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-1047))));
                                var_26 = ((/* implicit */unsigned int) (+(var_0)));
                                var_27 = ((/* implicit */short) (-((+(((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_28 = var_6;
}
