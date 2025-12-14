/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72183
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
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~((+(((/* implicit */int) (signed char)-110))))));
        arr_3 [i_0] = ((/* implicit */short) ((var_4) ? (max((11347352202737879412ULL), (((/* implicit */unsigned long long int) (unsigned short)56228)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)56288))));
        arr_4 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 139144552810240050ULL))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) (unsigned short)57987)));
        var_14 = ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)56228))))) ^ (((unsigned int) 7666606204848707790LL)));
    }
    var_15 += ((/* implicit */unsigned short) ((unsigned long long int) var_6));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)57987))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56228))))) : (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    for (int i_5 = 4; i_5 < 17; i_5 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 408679144598966796LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10151))) : (17730740313111981192ULL)))))) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)140))))), (var_9))))));
                            var_18 ^= ((/* implicit */short) ((signed char) ((signed char) ((-7666606204848707782LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_24 [i_2] [i_3]))));
                                arr_30 [(signed char)3] [i_3] [i_6] [(signed char)9] [i_8] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_3])) ? (((((/* implicit */_Bool) arr_21 [i_3] [i_3] [0U])) ? (((/* implicit */int) (signed char)41)) : (774730220))) : ((~(((/* implicit */int) var_4)))))), (((/* implicit */int) var_10))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
