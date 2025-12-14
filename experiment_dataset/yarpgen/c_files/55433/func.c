/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55433
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
    var_13 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((min((585612733), (var_9))), (min((var_12), (((/* implicit */int) var_11))))))), (min((max((((/* implicit */unsigned long long int) var_11)), (var_5))), (((/* implicit */unsigned long long int) max((0), (((/* implicit */int) (unsigned short)0)))))))));
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) min((min((max((var_8), (((/* implicit */unsigned int) (unsigned short)0)))), (((/* implicit */unsigned int) max(((unsigned short)0), (var_1)))))), (max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_3)), ((unsigned short)28252)))), (min((((/* implicit */unsigned int) var_0)), (var_4))))))))));
    var_15 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((((/* implicit */int) min(((unsigned short)43857), (((/* implicit */unsigned short) (signed char)-117))))), (min((var_12), ((-2147483647 - 1))))))), (min((((/* implicit */unsigned int) min((var_12), (((/* implicit */int) (unsigned char)1))))), (min((((/* implicit */unsigned int) var_11)), (var_8)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)4)), ((unsigned short)54826)))), (min((var_5), (((/* implicit */unsigned long long int) (unsigned char)255)))))), (max((min((((/* implicit */unsigned long long int) var_6)), (9221120237041090560ULL))), (max((arr_3 [i_2] [i_1 + 1] [(unsigned short)8]), (((/* implicit */unsigned long long int) var_3))))))));
                    var_16 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) min((var_9), (((/* implicit */int) (unsigned short)28279))))), (min((((/* implicit */unsigned long long int) var_2)), (0ULL))))), (min((min((24ULL), (arr_3 [i_2] [i_1 - 2] [8]))), (((/* implicit */unsigned long long int) max((arr_7 [i_1] [i_2]), (((/* implicit */unsigned int) (signed char)103)))))))));
                }
                arr_9 [i_1 - 2] [8ULL] = min((min((((/* implicit */unsigned int) max((var_0), (var_2)))), (min((4227509766U), (((/* implicit */unsigned int) (unsigned short)48522)))))), (((/* implicit */unsigned int) max((min((((/* implicit */int) (unsigned char)255)), (0))), (max((-1316955141), (((/* implicit */int) var_11))))))));
                arr_10 [i_0] [i_0] = min((min((((/* implicit */long long int) min((var_7), (((/* implicit */unsigned char) var_6))))), (min((arr_4 [i_0] [1]), (((/* implicit */long long int) (signed char)1)))))), (max((min((6977992158633899322LL), (((/* implicit */long long int) 398642386)))), (((/* implicit */long long int) min((arr_1 [i_0]), (arr_1 [i_0])))))));
            }
        } 
    } 
}
