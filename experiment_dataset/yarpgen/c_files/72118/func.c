/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72118
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
    for (signed char i_0 = 3; i_0 < 15; i_0 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        arr_10 [i_1] = ((/* implicit */signed char) var_13);
                        arr_11 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */short) ((unsigned short) max((((/* implicit */short) var_3)), (((short) (short)7168)))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned short) (+((((_Bool)1) ? (((((/* implicit */_Bool) (unsigned short)240)) ? (((/* implicit */int) (unsigned short)240)) : (arr_2 [9LL] [9LL] [9LL]))) : (((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 2]))))));
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((unsigned int) min((((unsigned short) (signed char)-31)), (((/* implicit */unsigned short) ((short) (unsigned short)65285)))))))));
    }
    for (signed char i_4 = 3; i_4 < 15; i_4 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min((((/* implicit */long long int) (short)-5989)), (((arr_8 [i_4 + 1] [(short)12] [(short)12] [i_4 - 2]) + (((/* implicit */long long int) ((arr_6 [(unsigned short)10] [i_4 - 3] [i_4 - 2]) + (((/* implicit */int) (unsigned short)20796))))))))))));
        var_17 = ((/* implicit */unsigned char) var_12);
    }
    var_18 = ((/* implicit */_Bool) min((var_18), (((((/* implicit */int) ((_Bool) min((((/* implicit */signed char) var_12)), ((signed char)1))))) >= (((/* implicit */int) var_8))))));
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        arr_17 [i_5] = ((/* implicit */unsigned short) ((int) var_0));
        arr_18 [i_5] = ((/* implicit */unsigned short) var_10);
    }
    var_19 = ((/* implicit */short) var_12);
}
