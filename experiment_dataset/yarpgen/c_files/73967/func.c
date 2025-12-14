/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73967
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
    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_0)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((((/* implicit */_Bool) -1375685496)) ? (4194303LL) : (((/* implicit */long long int) 1205533968U)));
        arr_2 [i_0] &= ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) var_7);
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                var_14 = ((/* implicit */int) arr_7 [i_1] [i_1] [i_3]);
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) 3089433327U)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-4194303LL)));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_9 [i_1] [i_2] [i_2] [i_1])) : (((/* implicit */int) arr_9 [i_1] [i_2] [i_3] [i_1]))));
            }
            arr_11 [i_1] [i_1] |= ((/* implicit */unsigned char) ((long long int) 3089433327U));
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) min((12429787524132370791ULL), (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)7224))) : (20LL)))))))));
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((unsigned int) var_0)) * (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [(_Bool)1] [i_4])) ? (((/* implicit */long long int) arr_13 [i_1] [i_4])) : (arr_4 [i_4])));
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_7 = 3; i_7 < 12; i_7 += 4) 
                {
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)7224)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_6 [i_1] [i_5])) : (((/* implicit */int) arr_6 [i_1] [i_5]))));
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 0)) ? (1084707593U) : (1084707593U))))));
                    arr_23 [i_1] [i_1] [i_6] [i_6] &= ((/* implicit */int) 3210259703U);
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)53930)) : (((/* implicit */int) var_9))));
                    var_23 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)5)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_5] [i_5])))))));
                }
                for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    arr_26 [i_8] [i_1] [i_6] [i_8] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */_Bool) 3089433327U)) ? (((/* implicit */unsigned long long int) var_8)) : (6016956549577180825ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218)))));
                    arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [i_6]))) <= (((((/* implicit */_Bool) arr_7 [i_1] [8LL] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (12429787524132370791ULL)))));
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((6016956549577180825ULL) + (((/* implicit */unsigned long long int) arr_14 [i_1] [i_1])))))));
                    arr_28 [i_1] [i_1] = ((/* implicit */unsigned char) (_Bool)0);
                }
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) 3210259702U)) && (((/* implicit */_Bool) 6016956549577180825ULL))));
            }
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) var_10))));
        }
        var_27 -= ((((((/* implicit */_Bool) ((unsigned char) (short)-5689))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (arr_25 [i_1] [i_1] [i_1] [i_1] [i_1]) : (1992663079U)))) : (((arr_1 [i_1]) ? (1576821839504769439LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (700785299U)))) ? (((/* implicit */int) min((var_1), ((signed char)-111)))) : ((~(((/* implicit */int) (signed char)-22))))))));
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (arr_12 [i_1])))) ? ((+(var_2))) : (((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1]))))) != (1205533968U))))));
    }
    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) 4417106405120395241ULL)) && (((/* implicit */_Bool) var_5))));
}
