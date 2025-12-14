/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60715
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
    for (unsigned long long int i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) != (4294967295U))))));
        var_20 = ((/* implicit */signed char) max(((-(((((/* implicit */_Bool) (short)-6311)) ? (3162609522U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-30492))))))), (((/* implicit */unsigned int) (_Bool)0))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((9696965067275212968ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28166)))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) 11908025172730268137ULL);
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    {
                        arr_20 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3))) / (15534499368630116768ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)42)) != (((/* implicit */int) (signed char)1)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16059002824941826615ULL)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) (_Bool)0)))))));
                        arr_21 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) min((16386511394490236654ULL), (7381820552748571885ULL)));
                    }
                } 
            } 
        } 
        arr_22 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((17), (((/* implicit */int) (short)10826)))) < (max((((/* implicit */int) (signed char)-52)), (-334953966))))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 1593220169U)))) & (((((/* implicit */_Bool) 475448971U)) ? (((/* implicit */unsigned long long int) 32767)) : (143833713099145216ULL)))))));
        arr_23 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23))) : (14596704279206661780ULL)));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) 1387770487968231631LL);
        arr_27 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-102))) - (4095ULL)));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (!(((8042619152438747251ULL) != (((/* implicit */unsigned long long int) 0)))))))));
    }
    for (long long int i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned long long int) (-(((-832851673) + (((/* implicit */int) (unsigned char)148))))));
        var_24 -= ((/* implicit */unsigned char) (((+(450331802U))) + (min((((((/* implicit */_Bool) (short)-23926)) ? (1444317443U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)17061))))), (((0U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))))));
    }
}
