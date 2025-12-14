/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67170
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)127)), (var_6)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))) : ((~(var_0)))))) ? (((/* implicit */int) var_3)) : (((int) ((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */int) (unsigned short)49738)) : (((/* implicit */int) var_5)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_15 -= ((/* implicit */long long int) var_9);
                    var_16 -= ((/* implicit */long long int) (-(((/* implicit */int) max(((signed char)0), ((signed char)-20))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        var_17 |= ((/* implicit */signed char) arr_4 [i_0 - 1] [14U]);
                        /* LoopSeq 1 */
                        for (long long int i_4 = 4; i_4 < 16; i_4 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1505160995866255100ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)2047))) : (-8797696242909416225LL))))));
                            arr_13 [i_1] [i_1] [i_2] [i_1] [(unsigned short)11] = ((/* implicit */long long int) var_2);
                            arr_14 [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)208)) ? (-2430105060109479550LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 12656956984020373671ULL)) || (arr_7 [i_1])))) : (var_11)));
                        }
                        arr_15 [i_1] [(signed char)5] = ((/* implicit */unsigned int) ((signed char) arr_11 [i_0 + 2] [i_0 + 1] [i_0] [i_1] [i_0 + 2]));
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_3 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15814)))));
                    }
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_7 [(signed char)12]))));
                    arr_16 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -444423575)), (var_6)))) ? (max((var_6), (((/* implicit */unsigned long long int) (short)7598)))) : (max((((/* implicit */unsigned long long int) 419372223U)), (1505160995866255100ULL))))), (((/* implicit */unsigned long long int) min(((unsigned char)111), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-1)) == (((/* implicit */int) (unsigned short)47193))))))))));
                }
            } 
        } 
    } 
}
