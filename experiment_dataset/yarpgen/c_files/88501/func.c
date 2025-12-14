/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88501
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
    var_19 = ((/* implicit */int) var_16);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) max((((/* implicit */long long int) (~(((/* implicit */int) (signed char)59))))), (((long long int) arr_1 [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned short) var_14);
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)52053))) > (4181865144934184785LL)));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
    {
        arr_8 [(unsigned char)16] |= ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
        var_21 = ((/* implicit */short) (signed char)-1);
    }
    for (int i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
    {
        var_22 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)227))) * (2650917860542652819ULL));
        var_23 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-12))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                {
                    arr_18 [i_4] = ((/* implicit */long long int) var_6);
                    arr_19 [i_2] [i_2] [i_2] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) (~(var_6)))))));
                    arr_20 [19LL] [(short)19] [(short)19] &= ((/* implicit */unsigned short) arr_15 [(short)5] [i_3] [i_3] [i_3]);
                    var_24 = ((/* implicit */short) ((long long int) var_13));
                }
            } 
        } 
        var_25 = arr_14 [i_2] [i_2] [i_2] [(short)5];
    }
    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_0))));
}
