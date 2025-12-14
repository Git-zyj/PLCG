/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73692
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
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (-(((((((/* implicit */int) var_5)) > (((/* implicit */int) var_6)))) ? ((-(((/* implicit */int) var_10)))) : (((int) var_1)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_12 = ((/* implicit */long long int) (+(((unsigned int) arr_2 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((9848400905708349239ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) ? ((+(-1LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0 + 1])))))) || (((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_3]))));
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((long long int) arr_1 [i_0 - 1] [i_0 - 1])) > (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)0)), (4106004468U)))))))));
                        var_15 = ((/* implicit */_Bool) min((min((3427310422U), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) arr_0 [5ULL] [i_2]))))))), (((unsigned int) ((arr_9 [i_3]) ? (188962827U) : (arr_4 [i_0 + 3] [12ULL] [i_2]))))));
                    }
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [8ULL])))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (4106004468U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (min((arr_13 [i_0 + 3] [i_0 - 1] [i_0] [i_0 + 2]), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_0]))) ^ (-3736236400827411762LL)))))))))));
                }
            } 
        } 
        arr_14 [i_0] [i_0 + 2] = ((/* implicit */long long int) (unsigned char)175);
    }
    for (unsigned char i_4 = 4; i_4 < 21; i_4 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) 11164492597115829044ULL))))))));
        var_18 ^= ((((/* implicit */_Bool) (-((-(7282251476593722572ULL)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (arr_16 [i_4 - 2]) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_15 [i_4 - 2])), (var_5)))))) : (((/* implicit */int) arr_15 [i_4])));
    }
    var_19 = ((((/* implicit */int) var_2)) != (((/* implicit */int) ((short) min((var_6), ((_Bool)1))))));
    var_20 = ((/* implicit */_Bool) (+((~(((/* implicit */int) var_10))))));
}
