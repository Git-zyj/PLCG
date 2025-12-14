/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6356
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
    var_15 = ((/* implicit */unsigned short) (short)14223);
    var_16 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)0))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) var_12);
                arr_6 [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) (unsigned short)65519)))))));
                var_17 -= ((/* implicit */short) (+(var_1)));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 2) 
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22737)) ? (3697137401121073843ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */int) (unsigned short)36230)) : ((-(((/* implicit */int) var_10)))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_19 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-14222))));
                                arr_15 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? ((-(((/* implicit */int) (unsigned short)36230)))) : (((/* implicit */int) arr_3 [(unsigned char)10] [i_2]))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [(unsigned short)10] [i_2 + 1] [(unsigned char)4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)51))) : (var_12)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-14224))))) ? (((/* implicit */int) ((signed char) var_14))) : (((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) (unsigned short)6874)))))))));
                }
                for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    arr_18 [i_0] [i_5] = ((/* implicit */short) arr_13 [i_0] [i_0]);
                    var_21 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) max((6755399441055744ULL), (((/* implicit */unsigned long long int) arr_9 [(unsigned short)13]))))) ? (((((/* implicit */_Bool) arr_9 [(short)5])) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) var_3)))) : ((~(((/* implicit */int) (unsigned char)91))))))));
                    arr_19 [i_5] [(signed char)2] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_9);
                    arr_20 [10ULL] [i_1] &= ((/* implicit */short) arr_17 [i_0] [(signed char)10] [i_5]);
                    var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)33963))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) var_13);
}
