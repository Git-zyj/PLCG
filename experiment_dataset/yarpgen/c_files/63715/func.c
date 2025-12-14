/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63715
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_10 *= ((((/* implicit */int) arr_0 [i_0] [i_0])) < (((/* implicit */int) arr_0 [i_0] [i_0])));
        arr_2 [i_0] = ((/* implicit */signed char) var_4);
        var_11 -= ((-8029323528123228384LL) > ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (4902155170699222859LL))));
        var_12 = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_13 += ((/* implicit */short) ((((/* implicit */int) arr_3 [i_1])) <= (((/* implicit */int) arr_3 [i_1]))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) arr_1 [i_1]))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))) / (4294967292U)));
            var_16 = ((/* implicit */unsigned short) arr_0 [i_1] [i_2]);
        }
        arr_7 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_1])) * ((-(((/* implicit */int) (short)-32755))))));
    }
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                {
                    var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5] [i_4] [i_3])) ? (((/* implicit */int) (short)7168)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? ((~(((/* implicit */int) arr_14 [i_3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_5] [i_4])))))));
                    arr_20 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */int) max((((/* implicit */long long int) ((var_2) ? (((/* implicit */int) ((short) (signed char)32))) : (((/* implicit */int) min(((short)-7175), (((/* implicit */short) var_9)))))))), (((long long int) ((0LL) <= (-4902155170699222859LL))))));
                }
            } 
        } 
    } 
}
