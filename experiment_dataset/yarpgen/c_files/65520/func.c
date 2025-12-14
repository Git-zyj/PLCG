/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65520
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
    var_20 -= ((/* implicit */unsigned int) var_2);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((short) ((_Bool) min((((/* implicit */long long int) arr_2 [i_0])), (8898027427264400878LL)))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_2]))));
                    arr_12 [i_2] = min((((/* implicit */long long int) (unsigned char)255)), (-245336264457536313LL));
                    arr_13 [i_0] [(unsigned short)9] = ((/* implicit */signed char) (+(((/* implicit */int) arr_4 [i_0] [i_2]))));
                    arr_14 [i_0] = ((/* implicit */int) ((_Bool) ((int) 14664394627238444720ULL)));
                }
            } 
        } 
    }
    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
    {
        var_21 -= ((/* implicit */long long int) ((short) arr_1 [i_3]));
        arr_17 [i_3] [i_3] = ((/* implicit */unsigned char) (+(max((arr_9 [i_3] [i_3]), (arr_1 [i_3])))));
    }
    for (long long int i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
    {
        var_22 += ((/* implicit */unsigned char) arr_15 [i_4] [(unsigned short)2]);
        /* LoopSeq 1 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_6 = 1; i_6 < 9; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    {
                        var_23 = ((/* implicit */long long int) min((var_23), (-3456146267906341647LL)));
                        arr_28 [i_4] [i_4] [i_7] = ((/* implicit */unsigned short) arr_1 [i_4]);
                    }
                } 
            } 
            arr_29 [3LL] = (unsigned char)118;
            arr_30 [i_4] = ((/* implicit */unsigned char) arr_19 [i_4]);
        }
        var_24 &= ((/* implicit */short) (~(((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_10 [i_4]))))))));
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
    {
        arr_34 [(short)8] &= ((/* implicit */unsigned long long int) arr_32 [i_8]);
        arr_35 [i_8] [1LL] = ((/* implicit */_Bool) (~(arr_32 [i_8])));
        arr_36 [(signed char)4] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) arr_33 [(_Bool)1] [i_8])))));
    }
    var_25 = ((/* implicit */int) var_13);
    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (~(((/* implicit */int) var_10)))))));
}
