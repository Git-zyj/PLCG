/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58986
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (max((var_1), (((/* implicit */int) var_8))))))) ? (((/* implicit */int) var_8)) : (var_10)));
    var_12 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) ((unsigned short) 10398290921952709085ULL));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)25696)) != (((/* implicit */int) arr_4 [i_0] [i_0]))));
            var_14 += ((/* implicit */unsigned long long int) (signed char)85);
        }
        arr_7 [i_0] [i_0] = ((/* implicit */signed char) (~(12175641253451663218ULL)));
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8048453151756842530ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))));
    }
    for (long long int i_2 = 1; i_2 < 16; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (short i_3 = 4; i_3 < 15; i_3 += 4) 
        {
            for (unsigned short i_4 = 2; i_4 < 15; i_4 += 4) 
            {
                for (unsigned int i_5 = 4; i_5 < 16; i_5 += 1) 
                {
                    {
                        arr_18 [i_2] [i_2] [i_3] [i_2] [i_5 - 3] [i_3] |= ((/* implicit */unsigned short) max((((((1781129495582128599ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51264))))) ? (12175641253451663202ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_14 [i_3])))))), (((((/* implicit */_Bool) arr_14 [i_3])) ? (8048453151756842547ULL) : (arr_11 [i_3])))));
                        arr_19 [i_2] [i_4] &= ((/* implicit */unsigned int) ((min((arr_11 [i_3]), (((/* implicit */unsigned long long int) arr_8 [i_2 - 1])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_8 [i_2 - 1]))))));
                    }
                } 
            } 
        } 
        arr_20 [i_2] = ((/* implicit */short) min((8048453151756842530ULL), (((/* implicit */unsigned long long int) (signed char)78))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
    {
        /* LoopNest 3 */
        for (int i_7 = 4; i_7 < 6; i_7 += 4) 
        {
            for (unsigned short i_8 = 1; i_8 < 7; i_8 += 4) 
            {
                for (long long int i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    {
                        var_16 *= ((/* implicit */_Bool) (signed char)96);
                        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
                    }
                } 
            } 
        } 
        arr_32 [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [(unsigned short)3])) && (((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) 12175641253451663200ULL)) ? (4837271926558251592ULL) : (((/* implicit */unsigned long long int) -316456598675352727LL)))) : (((/* implicit */unsigned long long int) arr_16 [i_6] [i_6] [i_6] [i_6]))));
    }
    var_18 = ((/* implicit */unsigned int) var_8);
    var_19 *= ((/* implicit */unsigned char) var_8);
}
