/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97922
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
    var_11 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = min((10ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)-121)), ((unsigned char)192)))));
        var_12 ^= (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)11))))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)0)) || (((/* implicit */_Bool) var_9))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_11 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? ((-(min((var_10), (((/* implicit */unsigned long long int) (unsigned char)62)))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0]) : (arr_2 [i_2]))))))));
                        var_14 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_2] [i_0]);
                    }
                } 
            } 
            var_15 = ((((/* implicit */_Bool) -1800261766)) ? (1073741824U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-24971))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_2 [i_0]) % (arr_2 [i_4])))) ? (min((11458670266002846373ULL), (((/* implicit */unsigned long long int) (short)(-32767 - 1))))) : (((/* implicit */unsigned long long int) arr_2 [i_0]))));
            var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_4] [i_4])), (((((/* implicit */_Bool) var_4)) ? (11458670266002846382ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7472)))))))) ? (((unsigned long long int) arr_15 [i_0] [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned int) var_1)))) << ((((+(var_5))) - (1301360629U))))))));
            var_18 = ((/* implicit */short) ((-502480395309631075LL) == (((/* implicit */long long int) var_3))));
            arr_16 [i_0] [i_4] [i_0] = ((/* implicit */signed char) max((((long long int) ((15585526377129124233ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_4] [i_0] [i_4])))))), (((/* implicit */long long int) (short)24971))));
            /* LoopNest 2 */
            for (unsigned int i_5 = 1; i_5 < 15; i_5 += 4) 
            {
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-32754))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))))));
                        arr_22 [i_0] [i_4] [i_5 - 1] [i_0] [(unsigned char)16] [i_0] = max((min((((/* implicit */unsigned long long int) var_9)), (((unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned long long int) 1073741828U)) == (var_4))))));
                        var_20 += ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (var_5)))))));
                    }
                } 
            } 
        }
    }
    var_21 &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (var_2) : (var_4))) + (var_4))))));
}
