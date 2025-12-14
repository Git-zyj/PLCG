/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64889
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
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_10 ^= ((/* implicit */unsigned char) (~((((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) arr_3 [(unsigned char)2] [(unsigned char)2])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_7))))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_11 += ((/* implicit */unsigned short) (-(((((((/* implicit */int) var_4)) - (((/* implicit */int) var_5)))) - (((((/* implicit */int) var_8)) - (((/* implicit */int) arr_3 [i_0] [6LL]))))))));
            arr_7 [i_0] [i_1] [i_1] = (-(((((/* implicit */_Bool) ((short) -5391095411724483060LL))) ? (((((/* implicit */int) (unsigned short)96)) << (((var_6) - (15038314019975000053ULL))))) : (((int) var_8)))));
        }
        for (long long int i_2 = 2; i_2 < 12; i_2 += 3) /* same iter space */
        {
            var_12 ^= ((/* implicit */long long int) ((((/* implicit */int) var_2)) ^ ((~(0)))));
            var_13 = ((/* implicit */int) max((var_13), (max((((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (-679186231953958566LL))))), ((~(2090838829)))))));
        }
        /* vectorizable */
        for (long long int i_3 = 2; i_3 < 12; i_3 += 3) /* same iter space */
        {
            var_14 ^= ((/* implicit */int) ((unsigned int) var_0));
            arr_12 [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) 2123675298496769265LL))) ? (arr_4 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_9))))));
        }
        var_15 |= ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_1 [i_0 - 1] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_0])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [(_Bool)1]))) : (var_3)))))) : (17894724661280350790ULL)));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 3; i_4 < 11; i_4 += 2) 
    {
        var_16 = ((/* implicit */int) ((arr_9 [i_4 - 3]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_0)))))));
        arr_15 [i_4] = ((/* implicit */int) ((signed char) var_6));
        var_17 *= ((/* implicit */int) ((_Bool) ((((/* implicit */int) (signed char)62)) == (828029274))));
        arr_16 [(signed char)1] = ((/* implicit */int) ((arr_9 [i_4 - 2]) - (((/* implicit */unsigned long long int) ((-3373999232550256576LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-12776))))))));
        arr_17 [i_4 + 1] [i_4 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        arr_20 [i_5] = ((/* implicit */int) var_8);
        arr_21 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_5] [i_5])))))))) ? (((/* implicit */long long int) var_1)) : (((long long int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_9)))))));
    }
    var_18 = ((/* implicit */int) ((((/* implicit */long long int) -2090838829)) / (4635382685369923245LL)));
    var_19 = ((/* implicit */_Bool) ((int) ((2123675298496769262LL) + (min((2123675298496769265LL), (((/* implicit */long long int) (signed char)15)))))));
}
