/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89494
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) + (497155071U)))))) ? (((((/* implicit */int) min((var_1), (var_1)))) % (((var_9) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)223)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    var_13 = ((/* implicit */short) max((var_10), (3797812225U)));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_14 += ((/* implicit */unsigned short) max((((/* implicit */int) max((arr_0 [i_0 + 2] [i_0 + 4]), (arr_0 [i_0 + 2] [i_0 + 1])))), (max(((-(((/* implicit */int) var_7)))), (max((((/* implicit */int) (unsigned short)7597)), (-1715188890)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_2] [i_2] [i_1] [i_2] [i_3] [i_4] |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_2 - 1] [i_4 - 1] [i_4 + 1]))) > (698045925657664716LL)));
                            arr_12 [i_0 + 4] [i_1] [i_4] [i_1] [i_4 - 1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)0))));
                        }
                    } 
                } 
            } 
            arr_13 [i_0] = ((/* implicit */unsigned short) var_2);
            var_15 = ((/* implicit */_Bool) var_1);
        }
        for (int i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57344))) * (var_0)));
            var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)57344)) << (((((/* implicit */int) arr_7 [6U] [i_0 + 1] [(unsigned char)5] [i_0 + 1] [i_0 - 1])) + (115)))))) ? ((-(((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_0] [i_0 + 2] [i_0 + 4])))) : (((/* implicit */int) max((arr_7 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]), (arr_7 [i_0] [i_0] [i_0 + 4] [i_0 - 1] [i_0 + 1]))))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                {
                    var_18 ^= (+(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (var_10))));
                    arr_23 [i_0] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_0 + 4]))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)32925)) > (((((/* implicit */_Bool) (unsigned short)57938)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_8))))))) : (((/* implicit */int) var_7))));
                }
            } 
        } 
    }
}
