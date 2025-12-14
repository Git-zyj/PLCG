/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7320
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
    var_15 *= var_6;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        var_16 -= ((/* implicit */signed char) arr_1 [(unsigned short)2]);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            var_17 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0])))));
            var_18 = ((/* implicit */_Bool) var_10);
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) (signed char)(-127 - 1))))))) ? ((-(((/* implicit */int) ((_Bool) var_12))))) : ((-(((/* implicit */int) arr_2 [i_0]))))));
            arr_5 [i_0] = ((_Bool) ((signed char) arr_2 [i_0]));
        }
        /* vectorizable */
        for (unsigned short i_2 = 3; i_2 < 20; i_2 += 2) 
        {
            var_20 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_2])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))));
            var_21 = ((/* implicit */_Bool) (signed char)-42);
        }
        arr_10 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) arr_8 [i_0 + 1] [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2457))) : (((long long int) arr_9 [i_0 + 1]))))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 2; i_3 < 23; i_3 += 3) 
        {
            for (unsigned short i_4 = 1; i_4 < 23; i_4 += 3) 
            {
                for (unsigned short i_5 = 3; i_5 < 22; i_5 += 3) 
                {
                    {
                        arr_17 [i_0] = ((/* implicit */unsigned short) ((unsigned int) (signed char)41));
                        arr_18 [i_0] [i_4] [(signed char)15] [i_0] = (~((~((~(((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_6 = 3; i_6 < 8; i_6 += 3) 
    {
        arr_21 [i_6 - 2] = ((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) -236945792)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
        var_22 += ((/* implicit */signed char) ((((((/* implicit */int) min(((signed char)123), (((/* implicit */signed char) (_Bool)1))))) == (((/* implicit */int) arr_4 [i_6] [(signed char)10] [(signed char)7])))) ? (min((((/* implicit */int) var_14)), ((~(((/* implicit */int) (signed char)0)))))) : (((/* implicit */int) min((var_10), (((/* implicit */signed char) (_Bool)0)))))));
    }
    var_23 = ((/* implicit */unsigned int) min(((unsigned short)0), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11)))))));
}
