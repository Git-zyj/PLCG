/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55509
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((var_2) - (((/* implicit */int) var_8))))) ? (((((/* implicit */unsigned int) arr_2 [i_0] [i_0])) + (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-16977), ((short)-16976)))))))));
        /* LoopSeq 1 */
        for (int i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            var_13 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (signed char)97)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : ((~(451697410U)))))));
            arr_7 [15LL] |= ((/* implicit */signed char) arr_6 [i_1 - 4] [i_1 - 1] [i_0]);
        }
        var_14 = ((/* implicit */long long int) (~(((/* implicit */int) ((6037281955386723855ULL) != (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned int) (unsigned char)224))))))))));
        var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((5663548451612942619LL), (arr_6 [i_0] [20] [i_0])))) ? (((((/* implicit */_Bool) var_10)) ? (arr_5 [i_0]) : (((/* implicit */long long int) var_0)))) : (((var_9) >> (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_0)) : (7410660397249285681ULL))) - (18446744071668085621ULL)))))));
    }
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) 3843269901U)), (4729366621461544632ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16977)))))) ? ((~(((/* implicit */int) (signed char)-121)))) : (((/* implicit */int) (signed char)-17))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */int) (short)-16966))));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 11; i_2 += 4) 
    {
        for (int i_3 = 2; i_3 < 10; i_3 += 2) 
        {
            for (long long int i_4 = 4; i_4 < 11; i_4 += 3) 
            {
                {
                    arr_16 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(-1271921187)))) % (((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */unsigned int) -1182138977)) : (451697410U)))));
                    var_18 = ((/* implicit */long long int) min((max((max((var_0), (((/* implicit */int) arr_14 [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        arr_19 [i_4] [i_4] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)-69)) ? (6468918312799118514ULL) : (((/* implicit */unsigned long long int) -4309753792809168604LL))))));
                        var_19 += 17408537000812508040ULL;
                        var_20 ^= ((/* implicit */short) 4903867015599741517ULL);
                        var_21 = (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1182138958)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16977))) : (4309753792809168622LL)))) + (((7410660397249285681ULL) / (((/* implicit */unsigned long long int) 4998622096164518270LL)))))));
                    }
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((var_2) <= (((((arr_15 [i_2] [i_3] [i_4]) + (2147483647))) >> ((((-(var_0))) - (2041465962))))))))));
                }
            } 
        } 
    } 
}
