/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78956
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? ((+(((5388839472339333835LL) / (((/* implicit */long long int) var_1)))))) : (min((((/* implicit */long long int) (signed char)108)), (-2701402302499222145LL)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_12 -= ((/* implicit */short) (-(((((/* implicit */int) var_6)) + (409417820)))));
        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-108)), ((+(9938152289004683119ULL))))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 2; i_4 < 10; i_4 += 1) 
                    {
                        for (short i_5 = 1; i_5 < 12; i_5 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */short) ((signed char) (-(-1237555010))));
                                arr_14 [(signed char)4] [(unsigned char)12] [i_3] [i_4] [i_5] |= ((/* implicit */long long int) 679111249U);
                                var_15 = ((/* implicit */int) max((2657369651192927954LL), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-104))) ^ (648814435U))))));
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned long long int) (signed char)38);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) -1835946630);
}
