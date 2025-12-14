/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98686
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
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_11))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_13 = ((((/* implicit */long long int) ((2147483647) >> (((2147483648U) - (2147483630U)))))) ^ ((((_Bool)1) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))));
        arr_3 [i_0] |= ((/* implicit */unsigned short) ((signed char) arr_0 [i_0]));
        var_14 = ((/* implicit */long long int) arr_0 [i_0]);
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_15 ^= ((/* implicit */unsigned int) 6692345193230794804LL);
            var_16 ^= ((/* implicit */unsigned int) arr_1 [(unsigned short)1] [i_1]);
            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) arr_2 [i_0] [i_1]))));
        }
        for (short i_2 = 3; i_2 < 10; i_2 += 1) 
        {
            var_18 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1813830166))));
            arr_8 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (arr_5 [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_3))))))));
            arr_9 [i_2] = ((/* implicit */long long int) (~(var_2)));
        }
        for (unsigned short i_3 = 1; i_3 < 7; i_3 += 2) 
        {
            arr_12 [i_0] [i_3] = ((/* implicit */unsigned int) var_8);
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) >= (((/* implicit */int) var_3)))))) >= (((((/* implicit */unsigned long long int) 6692345193230794804LL)) % (arr_5 [i_3 + 4] [i_0])))));
                var_20 = ((/* implicit */unsigned long long int) (-(arr_15 [i_3 + 4] [i_3 - 1] [i_3 + 3] [i_3 + 3])));
                var_21 = ((/* implicit */unsigned char) arr_15 [i_4] [i_4] [i_3] [i_0]);
            }
            var_22 = ((/* implicit */int) (~(6692345193230794804LL)));
        }
    }
    for (long long int i_5 = 2; i_5 < 15; i_5 += 2) 
    {
        arr_19 [i_5 - 2] |= ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_18 [i_5 - 1]))))));
        var_23 |= ((/* implicit */signed char) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_18 [i_5])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) == (((/* implicit */long long int) max((arr_18 [i_5 - 2]), (((/* implicit */unsigned int) -1284994276))))))))));
    }
}
