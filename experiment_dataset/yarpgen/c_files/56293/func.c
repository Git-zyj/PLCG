/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56293
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
    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (short)-1);
        arr_3 [i_0] = ((/* implicit */unsigned short) ((long long int) 2879755476495036111ULL));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 7; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [i_1] [(signed char)3] [(_Bool)1] = ((/* implicit */_Bool) min((18446744073709551615ULL), (262143ULL)));
                        arr_14 [i_3 + 3] [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) (short)1)))) & (((/* implicit */int) var_11)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)1)))))));
                        var_14 = ((/* implicit */short) ((unsigned long long int) min((((((/* implicit */_Bool) arr_4 [i_0] [i_3 + 3])) ? (((/* implicit */int) var_9)) : (21055905))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)-31239)) : (((/* implicit */int) (signed char)-1)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 4; i_5 < 9; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
                    var_16 = ((/* implicit */signed char) arr_6 [i_4] [i_4]);
                    var_17 = ((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 107377194308728706ULL)) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) (signed char)-69))))))));
                    var_18 = ((/* implicit */unsigned short) (+(571957152676052992ULL)));
                    arr_23 [i_4] [i_4] [i_4] [i_4] &= ((/* implicit */unsigned long long int) (~((-(7340032)))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) (+((-(((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
        var_20 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -974673365)) ? (8271458224605398429ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)180)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 6310902317778773990LL)) == (262142ULL)))) : (((/* implicit */int) arr_19 [i_4] [i_4] [i_4]))))), (min(((+(8271458224605398440ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (149745875) : (((/* implicit */int) var_11))))))));
    }
    var_21 = ((/* implicit */short) (-(262143ULL)));
}
