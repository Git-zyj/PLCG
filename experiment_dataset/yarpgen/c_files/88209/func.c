/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88209
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
    var_16 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */unsigned long long int) 402811843U)) | (11380563617750436341ULL))));
        var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (((~(((/* implicit */int) var_3)))) > (((/* implicit */int) arr_2 [i_0] [i_0]))))), (arr_0 [i_0])));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_2 [i_0] [i_0])), (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0])))) : (7066180455959115267ULL))));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (signed char i_3 = 4; i_3 < 13; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(max((arr_8 [i_1] [i_1] [(unsigned char)5]), (((/* implicit */unsigned long long int) var_15))))))) ? ((+(((((/* implicit */int) (unsigned short)25402)) % (((/* implicit */int) arr_11 [i_3] [i_2] [i_3] [i_4])))))) : ((+(((/* implicit */int) arr_15 [i_3 - 4] [i_3] [i_3 - 2]))))));
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((arr_10 [i_1]) | (arr_10 [i_3 - 4])))) ^ (((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */unsigned long long int) arr_10 [i_2])) : (7066180455959115262ULL))))))));
                    }
                } 
            } 
        } 
        var_20 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17131))) < (11380563617750436345ULL)));
    }
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((-(11380563617750436363ULL)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_1)))) >> (((((/* implicit */int) (short)20412)) - (20411)))))) : ((+((+(11380563617750436363ULL)))))));
    var_22 = ((/* implicit */short) var_8);
}
