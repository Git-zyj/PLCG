/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92644
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_9 [i_1 - 3] = ((/* implicit */unsigned long long int) var_9);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) arr_0 [i_3 - 4] [i_1 - 1])) >= ((-(((/* implicit */int) var_2))))))));
                                var_11 = ((/* implicit */signed char) (-(arr_6 [i_3 - 2] [i_1 - 3])));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_12 = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))))));
        arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(arr_5 [i_0])))), (((((/* implicit */_Bool) (unsigned short)33808)) ? (((((/* implicit */unsigned long long int) 8388608)) / (143552238122434560ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)33835)), (8388586))))))));
    }
    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) arr_13 [i_5] [i_5] [i_5] [i_5]);
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_28 [i_5] [i_8] [i_7] [i_8 - 1] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (arr_24 [i_8] [i_5] [i_5]))))))));
                        arr_29 [i_5] [i_6] [i_8] = ((/* implicit */_Bool) min((var_8), ((+(((/* implicit */int) min(((unsigned short)8190), (var_2))))))));
                        arr_30 [i_8] [i_6] [i_7] [i_7] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(arr_3 [i_7 - 1] [i_8 - 1])))), (18446744073709551615ULL)));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
    {
        arr_33 [i_9] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) -8388608)), (arr_10 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))), (max((((((/* implicit */_Bool) (unsigned short)33808)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_9]))) : (18446744073709551602ULL))), (((/* implicit */unsigned long long int) (unsigned char)15))))));
        var_14 = ((/* implicit */short) ((min((min((7979244133418181419ULL), (((/* implicit */unsigned long long int) 8388608)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_9] [(_Bool)0])) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) (unsigned char)228))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7742)))));
        arr_34 [i_9] = (~(max((((/* implicit */unsigned long long int) arr_12 [i_9] [i_9] [i_9] [i_9])), (max((18446744073709551605ULL), (((/* implicit */unsigned long long int) arr_22 [i_9] [i_9])))))));
        arr_35 [i_9] = ((/* implicit */short) max((max((((arr_24 [i_9] [i_9] [i_9]) ^ (((/* implicit */unsigned long long int) arr_27 [i_9] [(unsigned char)5] [i_9] [i_9])))), (min((((/* implicit */unsigned long long int) arr_2 [i_9] [i_9])), (var_0))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 280375465082880ULL))))) < (((/* implicit */int) (unsigned short)44497)))))));
    }
    var_15 = ((/* implicit */unsigned int) ((signed char) min((max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551611ULL))), (((/* implicit */unsigned long long int) (~(4294967295LL)))))));
}
