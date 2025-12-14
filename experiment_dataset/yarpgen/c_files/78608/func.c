/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78608
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
        arr_4 [i_0] = ((/* implicit */signed char) (((-2147483647 - 1)) % ((~(min((-84853475), (((/* implicit */int) arr_1 [i_0]))))))));
        var_15 = ((/* implicit */_Bool) max((max((((16871953268836637990ULL) ^ (((/* implicit */unsigned long long int) 2582431047937120115LL)))), (min((16871953268836637990ULL), (13638658790462170453ULL))))), (12252668954223993108ULL)));
        var_16 *= ((/* implicit */unsigned short) (_Bool)0);
    }
    for (unsigned char i_1 = 4; i_1 < 23; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 21; i_2 += 2) 
        {
            for (unsigned short i_3 = 4; i_3 < 23; i_3 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) max((var_17), (max((((((/* implicit */int) (unsigned short)55796)) ^ (1644649593))), (((/* implicit */int) ((((/* implicit */int) (short)-6795)) <= (arr_6 [(signed char)8]))))))));
                    arr_12 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_1] [i_3 - 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_9 [i_1] [i_3 - 2]), ((unsigned char)107))))) : (((((/* implicit */_Bool) 13685792143436805988ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-5098478647916015127LL)))));
                }
            } 
        } 
        var_18 |= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_9 [10ULL] [10ULL]))))) && ((!(((/* implicit */_Bool) arr_9 [(short)8] [(short)8]))))))), (min((((/* implicit */unsigned long long int) arr_8 [4ULL] [i_1])), (((((/* implicit */_Bool) 272092674253775617ULL)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))))));
        arr_13 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) ^ (((arr_6 [i_1]) & (arr_6 [i_1])))));
    }
    for (unsigned int i_4 = 1; i_4 < 10; i_4 += 3) 
    {
        var_19 = min((max((0ULL), (((/* implicit */unsigned long long int) arr_0 [i_4 + 1])))), (((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (arr_6 [i_4])))) ? (max((50331648ULL), (((/* implicit */unsigned long long int) (short)32760)))) : (var_9))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                {
                    var_20 &= ((/* implicit */unsigned char) arr_7 [i_4]);
                    arr_21 [i_4] [i_4] [i_6] = ((/* implicit */unsigned short) (short)-19037);
                    arr_22 [i_4] [(signed char)2] [i_5] [i_4] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)57325)) / (((((arr_6 [i_5]) + (2147483647))) >> ((((-(((/* implicit */int) (unsigned short)25)))) + (25)))))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */long long int) var_5);
}
