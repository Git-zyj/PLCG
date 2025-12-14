/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74414
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(min((-8304547263636856826LL), (((/* implicit */long long int) -329313272))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))));
    var_14 = ((/* implicit */int) ((unsigned long long int) var_11));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 24; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) (_Bool)0);
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_10 [(unsigned char)13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_8 [i_3] [i_1] [i_0 - 3]))) ? (((/* implicit */int) arr_3 [i_0 - 1])) : ((-(((/* implicit */int) (signed char)121))))));
                        arr_11 [i_0] [(_Bool)1] = ((/* implicit */signed char) ((_Bool) (!(arr_6 [i_0]))));
                        arr_12 [i_1] = ((/* implicit */long long int) ((signed char) -8304547263636856826LL));
                        var_16 += ((((/* implicit */_Bool) arr_8 [i_3 + 3] [i_1 + 2] [i_0 - 2])) ? (((/* implicit */int) arr_9 [i_0 - 1])) : (arr_8 [i_3 - 1] [i_1 - 1] [i_0 - 4]));
                        var_17 = ((/* implicit */_Bool) min((var_17), (arr_6 [i_1])));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            arr_16 [i_0] |= ((/* implicit */unsigned char) -8304547263636856826LL);
            arr_17 [i_0] = ((/* implicit */short) ((unsigned short) (signed char)-112));
            arr_18 [i_0] [i_4] [(unsigned short)23] = ((/* implicit */int) arr_9 [i_0 - 2]);
            arr_19 [i_0] [(short)16] = ((/* implicit */short) (+(((/* implicit */int) ((short) arr_9 [(short)8])))));
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    {
                        var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_0] [i_4] [i_4] [(short)2])) < (((/* implicit */int) arr_23 [i_4] [i_4] [i_4] [i_4]))));
                        var_19 = ((/* implicit */signed char) ((arr_20 [i_0] [i_0 - 1] [i_0 - 2] [(signed char)21]) ? (((/* implicit */int) arr_20 [i_0] [i_0 - 4] [i_0 - 2] [i_5])) : (0)));
                        var_20 = ((/* implicit */int) arr_23 [i_0] [i_4] [i_4] [i_6]);
                    }
                } 
            } 
        }
        for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            arr_26 [i_7] = ((/* implicit */_Bool) ((int) -3596480293556112704LL));
            arr_27 [i_0 - 1] [i_0 - 1] = ((/* implicit */short) (signed char)121);
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_0 - 4])) ? (arr_4 [i_0 - 3] [i_0 - 4]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((arr_6 [i_0 - 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_0 - 1])))))));
        }
    }
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((var_10) > (max((var_10), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_0))))))))))));
}
