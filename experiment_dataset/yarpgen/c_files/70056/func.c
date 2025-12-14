/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70056
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned short i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 63)), (((long long int) -64)))))));
                            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_9)))))));
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_3] [i_2]))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) & ((~(1889602115133292490ULL))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 14; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        {
                            var_17 ^= ((/* implicit */int) (-((((-(-7634479199071161379LL))) + (524287LL)))));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_8 [i_4 + 1] [i_4 - 1])))) != (min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_4]))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) (((+(((((/* implicit */int) (unsigned char)106)) * (((/* implicit */int) var_2)))))) == (((/* implicit */int) ((((/* implicit */_Bool) min((-325784250), (-53)))) && (((/* implicit */_Bool) max((((/* implicit */int) arr_16 [i_0] [i_1] [(signed char)14] [i_1] [i_0] [i_1])), (-63)))))))));
                arr_19 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((524280LL) > (((/* implicit */long long int) 39))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1])))))))) == (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)50605)), (arr_7 [(short)7] [i_0])))) ? (((/* implicit */int) (unsigned short)50605)) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) < (4))))))));
            }
        } 
    } 
    var_20 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) max(((unsigned char)202), (var_12)))) ? ((+(var_8))) : (((/* implicit */unsigned long long int) ((int) (unsigned short)3)))))));
}
