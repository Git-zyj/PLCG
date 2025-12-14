/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80752
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) == (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_6)))))) * (((/* implicit */int) min(((!(((/* implicit */_Bool) var_4)))), (((((/* implicit */int) var_9)) <= (((/* implicit */int) var_2)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (unsigned int i_3 = 4; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_14 *= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) ((727711964U) <= (arr_4 [i_0] [i_1] [i_2] [i_1])))))) - (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_3]))));
                        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_1] [i_1] [i_3 - 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [15ULL]))) : (1724315106U))))))));
                        var_16 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 2570652181U)) ? (((/* implicit */unsigned long long int) ((2570652181U) >> (((var_6) - (14478469620686781726ULL)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) % (var_5)))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            arr_15 [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)0))));
                            var_17 = ((/* implicit */unsigned long long int) (~(((arr_11 [i_3] [i_3 - 3] [i_2] [(unsigned short)9] [i_3 + 3]) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                    }
                } 
            } 
        } 
        var_18 += ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0] [(unsigned short)4]);
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_8 [i_0] [i_0]), (((/* implicit */int) var_12))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0]))))) : ((~(arr_8 [(_Bool)1] [i_0])))));
        var_20 = (((_Bool)1) ? (var_1) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) var_2)))))))));
        var_21 = ((/* implicit */unsigned short) min((1724315104U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((unsigned short)46849), (((/* implicit */unsigned short) var_9))))))))));
    }
    var_22 &= ((/* implicit */signed char) var_8);
}
