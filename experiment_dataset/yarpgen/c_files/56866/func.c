/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56866
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
    var_13 = ((/* implicit */unsigned int) ((unsigned char) (unsigned short)10131));
    var_14 = ((/* implicit */long long int) max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) 10161878538605708384ULL)) ? (268435200) : (((/* implicit */int) (short)-20643))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1542348259)) ? (((/* implicit */int) (unsigned short)15330)) : ((-2147483647 - 1))));
                arr_6 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)50207), ((unsigned short)45745))))))), (min((((((/* implicit */_Bool) (unsigned short)15329)) ? (((/* implicit */int) (short)-20637)) : (141388137))), ((+(1542348260)))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [(unsigned short)12] [i_0] = (!(((/* implicit */_Bool) 916255785040711328LL)));
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2305843009213693951LL)) ? (((/* implicit */unsigned long long int) -1948846585)) : (6718707991560656631ULL)))) ? (((/* implicit */unsigned long long int) ((2U) % (((/* implicit */unsigned int) 155563289))))) : ((-(0ULL)))))) ? (((/* implicit */int) max((max(((unsigned char)53), (((/* implicit */unsigned char) (signed char)24)))), (min((((/* implicit */unsigned char) (signed char)58)), ((unsigned char)53)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(-278162955676864145LL)))))))));
                                arr_14 [i_0] [i_1 - 3] [i_2] [(unsigned short)8] [(_Bool)1] [5LL] [(unsigned short)8] = ((/* implicit */unsigned short) ((unsigned int) ((4ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32759))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
