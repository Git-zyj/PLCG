/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82805
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
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 17LL)) ? (164161170) : (((/* implicit */int) arr_3 [i_0] [i_0 + 3])))) ^ (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (5846051730296773090ULL) : (((/* implicit */unsigned long long int) var_0))))))));
        arr_5 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (unsigned char)221)), (12600692343412778517ULL)));
        arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((12600692343412778533ULL) - (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10639))) : (5846051730296773079ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) 201326592)) ? (((/* implicit */int) (short)(-32767 - 1))) : (681084857))) : (((/* implicit */int) (_Bool)1))))) : (((unsigned long long int) min((((/* implicit */unsigned short) (short)6202)), ((unsigned short)55387))))));
        arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) (-2147483647 - 1));
    }
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54881))) : (3424197611949503376LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 5846051730296773048ULL)) ? (((/* implicit */int) (unsigned short)10676)) : (((/* implicit */int) (unsigned short)10664)))))))) ? (((((/* implicit */_Bool) (short)32755)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (-8895761215760503434LL))) : (var_13)));
    var_20 = ((/* implicit */long long int) max(((~(((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */unsigned int) var_14)))))), (((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */long long int) (unsigned short)24579)), (-8895761215760503434LL)))))));
}
