/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59558
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        arr_12 [i_1] [i_2] [(short)14] [i_1] = ((/* implicit */signed char) (-((-(((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) + (((/* implicit */int) var_9))))))));
                        arr_13 [i_1] [(unsigned char)12] [i_0 - 1] [i_3] [i_0] = ((/* implicit */signed char) (+(((arr_8 [i_1] [i_1] [i_1] [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14)))))));
                        arr_14 [i_0] [i_1] [(signed char)2] [i_3] = ((/* implicit */short) arr_4 [i_0] [i_1] [i_1]);
                        arr_15 [i_1] [i_1] [i_2 - 2] [i_1] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((arr_11 [i_2]), (((/* implicit */unsigned short) (short)22272)))), (((/* implicit */unsigned short) (short)-16022))))) || (((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_11 [i_0 - 2])) : (((/* implicit */int) (unsigned char)204)))))))));
                    }
                } 
            } 
        } 
        arr_16 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) (signed char)106)) <= (-804612945)))), (max((((/* implicit */unsigned short) ((_Bool) arr_4 [i_0] [i_0 - 1] [(unsigned short)11]))), (min(((unsigned short)0), (((/* implicit */unsigned short) var_14))))))));
        arr_17 [i_0 + 1] &= max((((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) var_14)) % (((/* implicit */int) var_10)))))), (max((arr_11 [i_0]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))))))));
    }
    var_17 = ((/* implicit */int) -4764517082863849177LL);
    var_18 -= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (-804612964)))))) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) var_7))));
    var_19 = ((/* implicit */unsigned long long int) (unsigned short)15189);
}
