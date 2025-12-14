/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84001
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
    var_10 = ((/* implicit */unsigned int) (unsigned char)114);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        var_11 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) (unsigned char)249)) != (((/* implicit */int) (_Bool)1)))));
        var_12 = ((/* implicit */signed char) var_4);
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                arr_10 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */int) (((_Bool)0) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_4)))) ? (arr_2 [i_1] [i_3]) : ((+(((/* implicit */int) var_3))))))) : (arr_0 [i_1])));
                var_13 = ((/* implicit */int) (signed char)10);
            }
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
            {
                var_14 += ((/* implicit */signed char) var_9);
                var_15 = ((unsigned char) ((((unsigned long long int) (signed char)51)) * (8236659578397997710ULL)));
                var_16 = ((/* implicit */unsigned long long int) var_2);
            }
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
            {
                var_17 = ((signed char) ((long long int) arr_9 [9] [5] [i_5] [i_2]));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_4 [i_1])) >> (((233784185U) - (233784167U)))))))) ? (max((((/* implicit */unsigned long long int) ((long long int) var_8))), (8236659578397997710ULL))) : (((((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38221))))) & (((/* implicit */unsigned long long int) var_8))))));
            }
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (~(((/* implicit */int) var_2)))))));
            var_20 = ((/* implicit */unsigned short) var_2);
            var_21 = ((/* implicit */long long int) var_1);
        }
        var_22 = ((/* implicit */signed char) min((((/* implicit */int) ((_Bool) ((548725406) & (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1])))))), (((arr_15 [i_1]) + (((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) >= (arr_7 [i_1]))))))));
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        arr_20 [i_6] = ((/* implicit */_Bool) var_3);
        var_23 = ((/* implicit */_Bool) var_7);
        var_24 = ((/* implicit */long long int) arr_0 [i_6 - 1]);
    }
    /* LoopSeq 2 */
    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        var_25 ^= ((/* implicit */_Bool) (signed char)-120);
        arr_24 [i_7] [i_7] = ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) -548725399)) && (((/* implicit */_Bool) (unsigned short)27314))))) * (((((/* implicit */int) arr_21 [i_7])) - (((/* implicit */int) arr_21 [i_7]))))))) != (((long long int) min((var_9), (var_9)))));
        var_26 = ((/* implicit */long long int) var_2);
    }
    for (signed char i_8 = 0; i_8 < 17; i_8 += 3) 
    {
        var_27 = ((/* implicit */signed char) var_9);
        var_28 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_23 [i_8])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7023525112631408602ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-10))) : (5540883662663727253ULL)))) ? (((/* implicit */int) arr_21 [i_8])) : (((/* implicit */int) arr_21 [17U]))))));
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            arr_29 [i_8] [i_9] [i_9] = max((var_9), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-11))) - (var_9))))));
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((unsigned long long int) arr_28 [i_8] [i_9])) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
        }
        arr_30 [i_8] = -1LL;
    }
    var_30 = ((/* implicit */int) var_5);
    var_31 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
}
