/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5654
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) 1363604142310713043ULL))));
                    arr_7 [(signed char)4] [(signed char)4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) (signed char)25)))) : (((/* implicit */int) ((signed char) (signed char)-37)))));
                }
                arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (signed char)-28))))) ? (((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1)))) : (1074731000)));
            }
        } 
    } 
    var_17 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16555372764082216368ULL)) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) (signed char)121))))) ? (((/* implicit */int) var_9)) : (var_5)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24096))) : (3609706217880682892ULL)))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)15942)) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) (signed char)-6)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((unsigned char) 13))) : (((((/* implicit */_Bool) (signed char)-42)) ? (-1074730993) : (((/* implicit */int) (unsigned short)19868)))))));
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) 9850544514545146069ULL))));
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61440)) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) (unsigned char)124))))) ? (((((/* implicit */_Bool) (unsigned char)124)) ? (7219696369757750380ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27421))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned short)49227)) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)249)))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) (signed char)-35)) : (-1021968249)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)384)) : (-1074731000)))) : (((((/* implicit */_Bool) (signed char)21)) ? (16102496954941768559ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117)))))));
                }
            } 
        } 
    } 
}
