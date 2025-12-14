/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91796
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
    var_16 = ((/* implicit */int) max((var_16), (((int) ((_Bool) (~(var_9)))))));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) var_13);
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_18 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1])))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)15621)) == (arr_3 [i_0] [i_0 - 2])))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_4 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_4 [i_0] [i_0 + 1]))))));
            var_19 = 7659797364252311299ULL;
        }
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            var_20 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_4 [i_0] [i_0 - 1])))) >= (((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0] [i_0]))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) max(((-(var_5))), ((-(((((/* implicit */int) var_6)) * (((/* implicit */int) (signed char)-68))))))));
                            arr_16 [i_2] [i_2] [i_2] [i_4] [i_5] &= ((/* implicit */unsigned long long int) (unsigned short)23448);
                            arr_17 [i_4] [i_0] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)64)))))) ? (((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0])) ? (((/* implicit */int) (unsigned short)13057)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (~(10116866927125833436ULL)))) ? (1714495260) : (1081775631)))));
                        }
                    } 
                } 
            } 
        }
        for (int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((min((5377320321272408827ULL), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_7 [i_6] [i_6] [i_0])), (var_5)))))) << (((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-47)), (var_1)))) - (65460))))))));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 10; i_7 += 3) 
            {
                for (short i_8 = 1; i_8 < 11; i_8 += 2) 
                {
                    {
                        arr_24 [i_0] [i_6] = ((/* implicit */signed char) max((8805572250178554661ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                        arr_25 [i_0] [i_6] [i_7] = var_14;
                        var_23 = ((/* implicit */_Bool) (unsigned short)11098);
                        arr_26 [i_0] [i_6] [i_0 + 1] [i_0 + 1] = ((/* implicit */signed char) arr_3 [i_0] [i_6]);
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */int) arr_20 [i_0 - 2] [i_0])), (min((((/* implicit */int) arr_7 [i_0] [i_0] [i_6])), (-225355255))))));
            var_25 = ((/* implicit */signed char) 1220826789);
        }
        for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
        {
            var_26 = ((/* implicit */unsigned long long int) var_7);
            arr_30 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-3)) / (max((((int) var_0)), (((((/* implicit */_Bool) (unsigned short)16606)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)35318))))))));
            var_27 = var_4;
        }
        var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20633)) ? (((/* implicit */int) arr_29 [i_0 + 1] [i_0 + 1] [10ULL])) : (307750568)))) && (((/* implicit */_Bool) arr_23 [(_Bool)1] [i_0 - 1] [i_0] [(_Bool)1]))));
    }
}
