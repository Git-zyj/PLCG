/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98160
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
    var_10 = ((/* implicit */long long int) max((var_10), (((/* implicit */long long int) min((((short) var_0)), (((/* implicit */short) ((_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (short)-22883)))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_11 -= ((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_7))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (short i_3 = 4; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-32764))))) ? (min((((/* implicit */long long int) arr_2 [i_1])), (-8122184517674533125LL))) : (((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) + (((/* implicit */int) (_Bool)0))))))))));
                            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) max((((arr_10 [i_1] [i_3] [i_1]) / (arr_10 [i_0] [i_1] [i_0]))), (((arr_10 [i_1] [i_0] [i_1]) / (arr_10 [i_0] [i_0] [i_0]))))))));
                        }
                    } 
                } 
                arr_12 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (short)-9)) ? (((/* implicit */int) (short)-13497)) : (((/* implicit */int) arr_2 [i_0 + 1])))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        var_14 -= ((/* implicit */short) (+(((long long int) (+(var_6))))));
        var_15 -= ((/* implicit */short) ((long long int) min((((/* implicit */int) arr_0 [i_4])), (((((/* implicit */_Bool) 433646530990623616LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)14707)))))));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((((_Bool)0) ? (((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_15 [i_5])))) : (((((/* implicit */_Bool) arr_16 [i_5] [i_5])) ? (((/* implicit */int) arr_2 [i_5])) : (((/* implicit */int) arr_6 [i_5] [i_5] [0LL] [i_5]))))));
        var_17 = ((/* implicit */short) (_Bool)0);
    }
    for (short i_6 = 1; i_6 < 22; i_6 += 3) 
    {
        arr_20 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-4935)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_6]))) : (arr_3 [i_6]))), (((/* implicit */long long int) var_8))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (short)11109))))) ? (((/* implicit */int) arr_13 [i_6])) : (((/* implicit */int) ((-8767588040882624714LL) >= (-245748548036218010LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22669)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_6)))) ? (((((/* implicit */int) var_9)) | (((/* implicit */int) arr_15 [i_6])))) : (((/* implicit */int) arr_1 [0LL] [i_6 - 1]))))));
        var_18 -= ((/* implicit */long long int) ((((long long int) ((arr_3 [i_6]) >= (((/* implicit */long long int) ((/* implicit */int) (short)32761)))))) < (arr_4 [i_6])));
        var_19 -= ((/* implicit */_Bool) arr_4 [i_6]);
    }
    var_20 = ((/* implicit */short) (-(((((/* implicit */_Bool) -989343967504291220LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (-4375101355510219886LL))))))));
}
