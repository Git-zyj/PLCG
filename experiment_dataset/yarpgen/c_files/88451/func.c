/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88451
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])))) && (((/* implicit */_Bool) 1856825271019043144LL)))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (short)-24377)) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_1 [(unsigned char)11]))))))) : (((/* implicit */int) (short)-24401))));
        arr_2 [i_0] = (short)24601;
        var_21 = arr_0 [i_0 + 1];
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 22; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1 + 1] [i_1] = ((short) 8082844651636716809LL);
        arr_6 [(signed char)14] [i_1 + 2] = ((/* implicit */long long int) arr_4 [i_1 + 1]);
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 23; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                {
                    arr_13 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_3])) ? (arr_8 [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_3])) > (((/* implicit */int) var_3))))))));
                    arr_14 [i_1 + 2] [(unsigned char)4] [i_1 - 1] = ((/* implicit */_Bool) ((((arr_8 [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-11424))))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)24377))) < (arr_8 [i_2])))))));
                }
            } 
        } 
        var_22 &= ((/* implicit */short) ((long long int) (signed char)-57));
        arr_15 [i_1] = ((/* implicit */short) (signed char)-57);
    }
    for (short i_4 = 1; i_4 < 22; i_4 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) var_2);
        var_24 = ((/* implicit */long long int) (short)-11408);
    }
    var_25 = (!(((/* implicit */_Bool) ((((long long int) (short)11407)) / (((/* implicit */long long int) ((var_15) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))))))));
    var_26 = var_12;
    var_27 = ((/* implicit */_Bool) (((~(((/* implicit */int) (short)-13118)))) >> (((/* implicit */int) (_Bool)1))));
}
