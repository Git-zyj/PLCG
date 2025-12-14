/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97831
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((_Bool) max(((-(((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */int) (signed char)61)) * (((/* implicit */int) arr_0 [i_0])))))));
        arr_3 [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) min((2047LL), (((/* implicit */long long int) ((((/* implicit */int) (signed char)61)) < (((/* implicit */int) (_Bool)1))))))));
        var_10 *= ((short) ((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10144)))));
    }
    var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) (short)-7977)))))))));
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            {
                arr_8 [i_1] [i_1] [0] = ((/* implicit */unsigned short) arr_7 [i_1] [i_2] [i_1]);
                /* LoopNest 2 */
                for (short i_3 = 3; i_3 < 17; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (-((((-(var_7))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-9)) == (((/* implicit */int) (short)15115)))))))))))));
                            arr_13 [i_1] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_4), (((/* implicit */unsigned char) arr_11 [(_Bool)1] [(_Bool)1] [i_3 - 3])))))) : (arr_10 [i_3 + 2] [i_3] [i_3 - 3] [i_3 - 1])))) ? (max((((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_10 [i_1] [i_3] [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)178))))), (arr_10 [i_1] [i_3] [i_1] [i_4]))) : (max((((/* implicit */unsigned long long int) arr_4 [i_4])), (((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-71)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */short) (!(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))) < (var_2)))));
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) * (((((/* implicit */unsigned long long int) (-(-2036LL)))) % (((((/* implicit */_Bool) (unsigned char)173)) ? (16174082969097501184ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))))));
}
