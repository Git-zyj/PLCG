/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82042
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_6 [i_0] [i_1 - 1] [6LL]) << (((arr_6 [i_0] [i_0] [i_1 - 1]) - (663586409U)))))) ? (((/* implicit */int) ((((/* implicit */long long int) arr_6 [i_0] [i_1 - 2] [i_1 - 1])) == (7617794783029991901LL)))) : ((+(((/* implicit */int) (signed char)-41))))));
                var_12 = (signed char)41;
                arr_7 [i_1 + 1] = ((/* implicit */long long int) (((+(((/* implicit */int) (signed char)41)))) != (max(((~(((/* implicit */int) (signed char)-17)))), (((/* implicit */int) (unsigned short)9434))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        var_13 = min((((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2]))) : (9223372036854775807LL))), (((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */long long int) arr_10 [i_2])) : (arr_8 [i_2]))));
        var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((min((((/* implicit */unsigned short) arr_9 [19])), (var_4))), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-41)) < (((/* implicit */int) (unsigned short)62308))))))))));
    }
    var_15 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            for (unsigned int i_5 = 4; i_5 < 7; i_5 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) max((var_16), (3987969041155477741LL)));
                    var_17 = ((/* implicit */unsigned int) (+((((+(((/* implicit */int) arr_9 [i_4])))) - ((+(((/* implicit */int) (unsigned short)3240))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_6 = 1; i_6 < 12; i_6 += 4) 
    {
        var_18 = ((((/* implicit */int) (unsigned short)62312)) & (((/* implicit */int) ((3615042094157929906LL) <= (((/* implicit */long long int) ((/* implicit */int) ((arr_19 [i_6]) != (-1932090015)))))))));
        var_19 = ((/* implicit */unsigned int) (~((~(((((/* implicit */_Bool) -1619621723)) ? (1456902073) : (((/* implicit */int) (unsigned short)30136))))))));
    }
}
